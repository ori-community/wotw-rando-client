#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TokenizerShortBlock__Class.h>
#include <Modloader/app/structs/TokenizerShortBlock.h>

namespace app::classes::types {
    namespace TokenizerShortBlock {
        inline app::TokenizerShortBlock__Class** type_info = (app::TokenizerShortBlock__Class**)(modloader::win::memory::resolve_rva(0x0478F5B0));
        inline app::TokenizerShortBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerShortBlock__Class>(type_info, "System.Security.Util", "TokenizerShortBlock");
        }
        inline app::TokenizerShortBlock* create() {
            return il2cpp::create_object<app::TokenizerShortBlock>(get_class());
        }
    } // namespace TokenizerShortBlock
} // namespace app::classes::types
