#ifndef __XML_PROC_INSTRUCTION_H__
#define __XML_PROC_INSTRUCTION_H__

/**
@file xml/ProcessingInstruction.hpp
Ce fichier contient l'entête de la classe ProcessingInstruction.
@author Benjamin BOUVIER
*/

#include "EmptyElement.hpp"
#include <string>

namespace xml {
	/**
	@brief Instruction de traitement xml (<? ?>)

	Cette classe modélise une instruction de traitement xml, ie une balise
	de la forme <? ?>.
	*/
	class ProcessingInstruction : public EmptyElement {
	private:
		// Le caractère de début est <?
		std::string beginCharacter();

		// Le caractère de fin est ?>
		std::string endCharacter();

	public:
		/**
		@brief Constructeur par défaut.

		@param _name Nom de l'instruction de traitement.
		*/
		ProcessingInstruction(ElementName _name) 
		{
			setName(_name); 
		}
	};
}
#endif
