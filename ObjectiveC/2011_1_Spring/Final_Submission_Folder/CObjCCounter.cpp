//! Code counter class methods for the C/C++ languages.
/*!
* \file CCCounter.cpp
*
* This file contains the code counter class methods for the C/C++ languages.
*/

#include "CObjCCounter.h"

/*!
* Constructs a CCCounter object.
*/


CObjCCounter::CObjCCounter()
{
	classtype = OBJC;
	
	language_name = "OBJC";
	file_extension.push_back(".m");
	file_extension.push_back(".mm");
	file_extension.push_back(".h");

	directive.push_back("#define");
	directive.push_back("#dictionary");
	directive.push_back("#error");
	directive.push_back("#if");
	directive.push_back("#ifdef");
	directive.push_back("#ifndef");
	directive.push_back("#else");
	directive.push_back("#elif");
	directive.push_back("#endif");
	directive.push_back("#import");
	directive.push_back("#include");
	directive.push_back("#line");
	directive.push_back("#module");
	directive.push_back("#pragma");
	directive.push_back("#undef");
	directive.push_back("#using");
	
	data_name_list.push_back("asm");
	data_name_list.push_back("auto");
	data_name_list.push_back("bool");
	data_name_list.push_back("char");
	data_name_list.push_back("class");
	data_name_list.push_back("const");
	data_name_list.push_back("double");
	data_name_list.push_back("enum");
	data_name_list.push_back("explicit");
	data_name_list.push_back("extern");
	data_name_list.push_back("FILE");
	data_name_list.push_back("float");
	data_name_list.push_back("friend");
	data_name_list.push_back("inline");
	data_name_list.push_back("int");
	data_name_list.push_back("long");
	data_name_list.push_back("mutable");
	data_name_list.push_back("namespace");
	data_name_list.push_back("operator");
	data_name_list.push_back("register");
	data_name_list.push_back("short");
	data_name_list.push_back("static");
	data_name_list.push_back("string");
	data_name_list.push_back("struct");
	data_name_list.push_back("template");
	data_name_list.push_back("typedef");
	data_name_list.push_back("union");
	data_name_list.push_back("unsigned");
	data_name_list.push_back("using");
	data_name_list.push_back("virtual");
	data_name_list.push_back("void");
	data_name_list.push_back("volatile");
	data_name_list.push_back("wchar_t");

	exec_name_list.push_back("break");
	exec_name_list.push_back("case");
	exec_name_list.push_back("catch");
	exec_name_list.push_back("cerr");
	exec_name_list.push_back("cin");
	exec_name_list.push_back("clog");
	exec_name_list.push_back("const_cast");
	exec_name_list.push_back("continue");
	exec_name_list.push_back("cout");
	exec_name_list.push_back("default");
	exec_name_list.push_back("delete");
	exec_name_list.push_back("do");
	exec_name_list.push_back("dynamic_cast");
	exec_name_list.push_back("else");
	exec_name_list.push_back("entry");
	exec_name_list.push_back("for");
	exec_name_list.push_back("goto");
	exec_name_list.push_back("if");
	exec_name_list.push_back("new");
	exec_name_list.push_back("reinterpret_cast");
	exec_name_list.push_back("return");
	exec_name_list.push_back("sizeof");
	exec_name_list.push_back("stderr");
	exec_name_list.push_back("stdin");
	exec_name_list.push_back("stdout");
	exec_name_list.push_back("switch");
	exec_name_list.push_back("static_cast");
	exec_name_list.push_back("throw");
	exec_name_list.push_back("try");
	exec_name_list.push_back("typeid");
	exec_name_list.push_back("while");

	math_func_list.push_back("abs");
	math_func_list.push_back("cbrt");
	math_func_list.push_back("ceil");
	math_func_list.push_back("copysign");
	math_func_list.push_back("erf");
	math_func_list.push_back("erfc");
	math_func_list.push_back("exp");
	math_func_list.push_back("exp2");
	math_func_list.push_back("expm1");
	math_func_list.push_back("fabs");
	math_func_list.push_back("fdim");
	math_func_list.push_back("floor");
	math_func_list.push_back("fma");
	math_func_list.push_back("fmax");
	math_func_list.push_back("fmin");
	math_func_list.push_back("fmod");
	math_func_list.push_back("frexp");
	math_func_list.push_back("hypot");
	math_func_list.push_back("ilogb");
	math_func_list.push_back("ldexp");
	math_func_list.push_back("lgamma");
	math_func_list.push_back("llrint");
	math_func_list.push_back("lrint");
	math_func_list.push_back("llround");
	math_func_list.push_back("lround");
	math_func_list.push_back("modf");
	math_func_list.push_back("nan");
	math_func_list.push_back("nearbyint");
	math_func_list.push_back("nextafter");
	math_func_list.push_back("nexttoward");
	math_func_list.push_back("pow");
	math_func_list.push_back("remainder");
	math_func_list.push_back("remquo");
	math_func_list.push_back("rint");
	math_func_list.push_back("round");
	math_func_list.push_back("scalbln");
	math_func_list.push_back("scalbn");
	math_func_list.push_back("sqrt");
	math_func_list.push_back("tgamma");
	math_func_list.push_back("trunc");

	trig_func_list.push_back("cos");
	trig_func_list.push_back("cosh");
	trig_func_list.push_back("sin");
	trig_func_list.push_back("sinh");
	trig_func_list.push_back("tan");
	trig_func_list.push_back("tanh");
	trig_func_list.push_back("acos");
	trig_func_list.push_back("acosh");
	trig_func_list.push_back("asinh");
	trig_func_list.push_back("atanh");
	trig_func_list.push_back("asin");
	trig_func_list.push_back("atan");
	trig_func_list.push_back("atan2");

	log_func_list.push_back("log");
	log_func_list.push_back("log10");
	log_func_list.push_back("log1p");
	log_func_list.push_back("log2");
	log_func_list.push_back("logb");

	cmplx_preproc_list.push_back("#define");
	cmplx_preproc_list.push_back("#dictionary");
	cmplx_preproc_list.push_back("#elif");
	cmplx_preproc_list.push_back("#else");
	cmplx_preproc_list.push_back("#endif");
	cmplx_preproc_list.push_back("#error");
	cmplx_preproc_list.push_back("#if");
	cmplx_preproc_list.push_back("#ifdef");
	cmplx_preproc_list.push_back("#ifndef");
	cmplx_preproc_list.push_back("#import");
	cmplx_preproc_list.push_back("#include");
	cmplx_preproc_list.push_back("#line");
	cmplx_preproc_list.push_back("#module");
	cmplx_preproc_list.push_back("#pragma");
	cmplx_preproc_list.push_back("#undef");
	cmplx_preproc_list.push_back("#using");

	cmplx_pointer_list.push_back("->");
}

/*!
* Counts directive lines of code.
*
* \param fmap list of processed file lines
* \param result counter results
* \param fmapBak list of original file lines (same as fmap except it contains unmodified quoted strings)
*
* \return method status
*/
int CObjCCounter::CountDirectiveSLOC(filemap* fmap, results* result, filemap* fmapBak)
{

	bool contd = false, trunc_flag = false;
	size_t idx, strSize;
	if (classtype == DATAFILE) return 0;
	int cnt = 0;
	string exclude = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_$";
	string strDirLine = "";

	filemap::iterator itfmBak = fmapBak->begin();
	for (filemap::iterator iter = fmap->begin(); iter!=fmap->end(); iter++, itfmBak++)
	{
		if (CUtil::CheckBlank(iter->line))
			continue;

		if (isPrintKeyword)
		{
			cnt = 0;
			CUtil::CountTally(" " + iter->line, directive, cnt, 1, exclude, "", "", &result->directive_count);
		}

		if (!contd)
		{
			// if not a continuation of a previous directive
			for (vector<string>::iterator viter = directive.begin(); viter != directive.end(); viter++)
			{
				// ensures the keyword stands alone, avoid, e.g., #ifabc
				if (((idx = CUtil::FindKeyword(iter->line, *viter)) != string::npos) && idx == 0)
				{
			
		contd = true;
					break;
   		        	}
        		}
			if (contd)
			{
				strSize = CUtil::TruncateLine(itfmBak->line.length(), 0, result->lsloc_truncate, trunc_flag);
				if (strSize > 0)
					strDirLine = itfmBak->line.substr(0, strSize);
				result->directive_lines[PHY]++;
				}
		}
		else
		{
			// continuation of a previous directive
			strSize = CUtil::TruncateLine(itfmBak->line.length(), strDirLine.length(), result->lsloc_truncate, trunc_flag);
			if (strSize > 0)
				strDirLine += "\n" + itfmBak->line.substr(0, strSize);
			result->directive_lines[PHY]++;
		}
	
		if (contd)
		{
			// if a directive or continuation of a directive (no continuation symbol found)
			if (iter->line[iter->line.length()-1] != ',' && iter->line[iter->line.length()-1] != '\\')
			{
				contd = false;
				result->directive_lines[LOG]++;
				result->addSLOC(strDirLine, trunc_flag);
			}
			iter->line = "";
		}
	}
	return 1;
}

/*!
* Processes physical and logical lines according to language specific rules.
* NOTE: all the blank lines +
*               whole line comments +
*               lines with compiler directives
*       should have been blanked from filemap by previous processing
*       before reaching this function
*
* \param fmap list of processed file lines
* \param result counter results
* \param fmapBak list of original file lines (same as fmap except it contains unmodified quoted strings)
*
* \return method status
*/
int CObjCCounter::LanguageSpecificProcess(filemap* fmap, results* result, filemap* fmapBak)
{
	int			paren_count		= 0;
	bool		for_flag			= false;
	bool		found_for			= false;
	bool		found_forifwhile		= false;
	bool		found_while			= false;
	char		prev_char			= 0;
	bool		data_continue			= false;
	bool		inArrayDec			= false;
	string		strLSLOC			= "";
	string		strLSLOCBak			= "";
	int		openBrackets		= 0;

	filemap::iterator fit, fitbak;
	string line, lineBak;
	StringVector loopLevel;

	int phys_exec_lines = 0;
	int phys_data_lines = 0;
	int temp_lines = 0;
	int cnt = 0;
	string exclude = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_$";

	for (fit = fmap->begin(), fitbak = fmapBak->begin(); fit != fmap->end(); fit++, fitbak++)
	{
		line = fit->line;

		// insert blank at the beginning (for searching keywords)
		line = ' ' + line;
		lineBak = ' ' + fitbak->line;
	
		// do not process blank lines
		// blank line means blank_line/comment_line/directive
		if (!CUtil::CheckBlank(line))
		{
			LSLOC(result, line, lineBak, strLSLOC, strLSLOCBak, paren_count, for_flag, found_forifwhile, found_while,
				prev_char, data_continue, temp_lines, phys_exec_lines, phys_data_lines, inArrayDec, found_for,
				openBrackets, loopLevel);

			if (isPrintKeyword)
			{
				cnt = 0;
				CUtil::CountTally(line, exec_name_list, cnt, 1, exclude, "", "", &result->exec_name_count);
			}

			result->exec_lines[PHY] += phys_exec_lines;
			phys_exec_lines = 0;

			result->data_lines[PHY] += phys_data_lines;
			phys_data_lines = 0;
		}
	}
	return 1;
}

/*!
* Extracts and stores logical lines of code.
* Determines and extract logical SLOC to place in the result variable
* using addSLOC function. Each time the addSLOC function is called,
* a new logical SLOC is added. This function assumes that the directive
* is handled before it is called.
*
* \param result counter results
* \param line processed physical line of code
* \param lineBak original physical line of code
* \param strLSLOC processed logical string
* \param strLSLOCBak original logical string
* \param paren_cnt count of parenthesis
* \param forflag found for flag
* \param found_forifwhile found for, if, or while flag
* \param found_while found while flag
* \param prev_char previous character
* \param data_continue continuation of a data declaration line
* \param temp_lines tracks physical line count
* \param phys_exec_lines number of physical executable lines
* \param phys_data_lines number of physical data lines
* \param inArrayDec marks an array declaration
* \param found_for found for loop
* \param openBrackets number of open brackets (no matching close bracket)
* \param loopLevel nested loop level
*/
void CObjCCounter::LSLOC(results* result, string line, string lineBak, string &strLSLOC, string &strLSLOCBak, int &paren_cnt,
							bool &forflag, bool &found_forifwhile, bool &found_while, char &prev_char, bool &data_continue,
							int &temp_lines, int &phys_exec_lines, int &phys_data_lines, bool &inArrayDec, bool &found_for,
							int &openBrackets, StringVector &loopLevel)
{
	// paren_cnt is used with 'for' statement only
	size_t start = 0; //starting index of the working string
	size_t i = 0, strSize;
	bool found_do, found_try, found_else, trunc_flag = false;
	string exclude = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_$:";
	int cnt = 0;

	string tmp = CUtil::TrimString(strLSLOC);

	// do, try
	found_do = (CUtil::FindKeyword(tmp, "do") != string::npos);
	found_try = (CUtil::FindKeyword(tmp, "try") != string::npos);
	// else is treated differently, else is included in SLOC, do and try are not
	found_else = (CUtil::FindKeyword(tmp, "else") != string::npos);

	// there may be more than 1 logical SLOC in this line
	while (i < line.length())
	{
		switch (line[i])
		{
		case ';': case '{': // LSLOC terminators
			                // ';' for normal executable or declaration statement
			                // '{' for starting a function or 'do' stmt or a block (which is counted)
			// get the previous logical mark until i-1 index is the new LSLOC
			// except 'do' precedes '{'
			// except '}' precedes ';' ??
			// do nothing inside 'for' statement
			if (found_for == true && paren_cnt > 0 && line[i] == ';')
				break;

			// record open bracket for nested loop processing
			if (isPrintKeyword)
			{
				if (line[i] == '{')
				{
					openBrackets++;
					if ((int)loopLevel.size() < openBrackets)
						loopLevel.push_back("");
				}
				else
				{
					if ((int)loopLevel.size() > openBrackets && openBrackets > 0)
						loopLevel.pop_back();
				}
			}

			// case 'while(...);', 'while(...) {', and '} while(...);'
			// this case is handled in case ')'
			if (found_while && found_forifwhile)
			{
				found_while = false;
				found_forifwhile = false;
				start = i + 1;
				break;
			}

			if (line[i] == '{')
			{
				if (prev_char == '=')
					inArrayDec = true;

				// continue until seeing ';'
				if (inArrayDec)
					break;

				// case for(...); and if (...) {
				// these specials are handled
				if (found_forifwhile)
				{
					found_forifwhile = false;
					start = i + 1;
					break;
				}

				// check if 'do' precedes '{'
				if (!found_do && !found_try && !found_else)
				{
					// find for 'do' in string before tmp string
					tmp = CUtil::TrimString(line.substr(start, i - start));
					found_do = (tmp == "do");		// found 'do' statement
					found_try = (tmp == "try");		// found 'try' statement
					// same as else
					found_else = (tmp == "else");	// found 'else' statement
				}
				if (found_do || found_try || found_else)
				{
					if (found_do && isPrintKeyword)
					{
						if (loopLevel.size() > 0) loopLevel.pop_back();
						loopLevel.push_back("do");
					}
					found_do = false;
					found_try = false;
					if (!found_else)
					{
						// everything before 'do', 'try' are cleared
						strLSLOC = "";
						start = i + 1;
					}
					break; // do not store '{' following 'do'
				}
			}

			// wrong, e.g., a[]={1,2,3};
			if (line[i] == ';' && prev_char == '}')
			{
				// check if in array declaration or not
				// if no, skip, otherwise, complete the SLOC containing array declaration
				if (!inArrayDec)
				{
					start = i + 1;
					break;
				}
			}

			inArrayDec = false;

			strSize = CUtil::TruncateLine(i + 1 - start, strLSLOC.length(), result->lsloc_truncate, trunc_flag);
			if (strSize > 0)
			{
				strLSLOC += line.substr(start, strSize);
				strLSLOCBak += lineBak.substr(start, strSize);
			}
			result->addSLOC(strLSLOCBak, trunc_flag);

			cnt = 0;
			CUtil::CountTally(strLSLOC, data_name_list, cnt, 1, exclude, "", "", &result->data_name_count);

			temp_lines++;

			if (data_continue == true && line[i] == ';')
			{
				result->data_lines[LOG] += 1;
				data_continue = false;
				phys_data_lines = temp_lines;
			}
			else
			{
				if (cnt > 0 && line[i] == ';')
				{
					result->data_lines[LOG] += 1;
					data_continue = false;
					phys_data_lines = temp_lines;
				}
				else
				{
					result->exec_lines[LOG] += 1;
					data_continue = false;
					phys_exec_lines = temp_lines;
				}
			}
			temp_lines = 0;
			strLSLOC = strLSLOCBak = "";
			start = i + 1;

			// reset some flagging parameters
			forflag = false;
			paren_cnt = 0;
			found_while = false;
			found_forifwhile = false;
			found_for = false;

			break;
		case '(':
			if (forflag)
				paren_cnt++;
			else
			{
				// handle 'for', 'foreach', 'while', 'if' the same way
				tmp = CUtil::TrimString(line.substr(start, i));
				if (CUtil::FindKeyword(tmp, "for") != string::npos
					|| CUtil::FindKeyword(tmp, "foreach") != string::npos
					|| CUtil::FindKeyword(tmp, "while")!= string::npos
					|| CUtil::FindKeyword(tmp, "if") != string::npos)
				{
					forflag = true;
					paren_cnt++;

					if (isPrintKeyword && (int)loopLevel.size() > openBrackets && openBrackets > 0)
						loopLevel.pop_back();

					if (CUtil::FindKeyword(tmp, "for") != string::npos)
					{
						if (isPrintKeyword)
							loopLevel.push_back("for");
						found_for = true;
					}
					else if (CUtil::FindKeyword(tmp, "while")!= string::npos)
					{
						if (isPrintKeyword)
							loopLevel.push_back("while");
						found_while = true;
					}
					else if (isPrintKeyword && CUtil::FindKeyword(tmp, "foreach") != string::npos)
						loopLevel.push_back("foreach");

					// record nested loop level
					if (isPrintKeyword)
					{
						if (CUtil::FindKeyword(tmp, "if") == string::npos)
						{
							int loopCnt = 0;
							for (StringVector::iterator lit = loopLevel.begin(); lit < loopLevel.end(); lit++)
							{
								if ((*lit) != "")
									loopCnt++;
							}
							if ((int)result->cmplx_nestloop_count.size() < loopCnt)
								result->cmplx_nestloop_count.push_back(1);
							else
								result->cmplx_nestloop_count[loopCnt-1]++;
						}
					}
				}
			}
			break;
		case ')':
			if (forflag)
			{
				paren_cnt--;
				if (paren_cnt == 0)
				{
					// handle 'for', 'foreach', 'while', 'if'
					strSize = CUtil::TruncateLine(i + 1 - start, strLSLOCBak.length(), result->lsloc_truncate, trunc_flag);
					if (strSize > 0)
						strLSLOCBak += lineBak.substr(start, strSize);
					result->addSLOC(strLSLOCBak, trunc_flag);
					strLSLOCBak = strLSLOC = "";

					result->exec_lines[LOG] += 1;

					phys_exec_lines = temp_lines;
					temp_lines = 0;
					start = i + 1;
					found_forifwhile = true;
					forflag = false;
					found_for = false;
				}
			}
			break;
		case '}':
			// skip '}' when found ';' and then '}' because '{' is counted already
			// also, {} is also skipped, counted
			if (prev_char == ';' || prev_char == '{' || prev_char == '}')
				if (!inArrayDec) start = i + 1;

			// record close bracket for nested loop processing
			if (isPrintKeyword)
			{
				openBrackets--;
				if (loopLevel.size() > 0) loopLevel.pop_back();
			}
			break;
		}

		if (line[i] != ' ' && line[i] != '\t') 
		{
			// if ;}}} --> don't count }}} at all
			// also, if {}}} --> don't count }}} at all
			// if ( !(line[i] == '}' && (prev_char == ';' || prev_char == '{'))) // see case '}' above
			prev_char = line[i];

			// change to not found if a char appears before
			if (line[i] != ')' && found_forifwhile)
				found_forifwhile = false;
		}
		i++;
	}

	tmp = CUtil::TrimString(line.substr(start, i - start));
	strSize = CUtil::TruncateLine(tmp.length(), strLSLOC.length(), result->lsloc_truncate, trunc_flag);
	if (strSize > 0)
	{
		strLSLOC += tmp.substr(0, strSize);
		tmp = CUtil::TrimString(lineBak.substr(start, i - start));
		strLSLOCBak += tmp.substr(0, strSize);
	}
	
	// make sure that we are not beginning to process a new data line
	cnt = 0;
	CUtil::CountTally(strLSLOC, data_name_list, cnt, 1, exclude, "", "", NULL);
//	CUtil::CountTally(strLSLOC, data_name_list, cnt, 1, exclude, "", "", &result->data_name_count);

	if (cnt > 0)
		data_continue = true;
	if (data_continue)
		temp_lines++;
	if (temp_lines == 0 && phys_data_lines == 0 && phys_exec_lines == 0)
		phys_exec_lines = 1;
}
