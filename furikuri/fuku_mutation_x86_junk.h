#pragma once



bool fuku_junk_generic(fuku_assambler& f_asm, fuku_code_holder& code_holder, linestorage::iterator lines_iter, 
    uint32_t instructions_flags, uint64_t eflags_changes, uint64_t regs_changes);