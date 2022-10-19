#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem_c {
        inline app::SearchDebugMenuItem_c__Class** type_info = (app::SearchDebugMenuItem_c__Class**)(modloader::win::memory::resolve_rva(0x04747508));
        inline app::SearchDebugMenuItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SearchDebugMenuItem_c__Class>(type_info, "", "SearchDebugMenuItem", "<>c");
        }
        inline app::SearchDebugMenuItem_c* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem_c>(get_class());
        }
    } // namespace SearchDebugMenuItem_c
} // namespace app::classes::types
