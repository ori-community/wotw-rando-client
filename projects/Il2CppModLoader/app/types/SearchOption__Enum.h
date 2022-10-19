#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SearchOption__Enum {
        inline app::SearchOption__Enum__Class** type_info = (app::SearchOption__Enum__Class**)(modloader::win::memory::resolve_rva(0x04713CF0));
        inline app::SearchOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::SearchOption__Enum__Class>(type_info, "System.IO", "SearchOption");
        }
        inline app::SearchOption__Enum* create() {
            return il2cpp::create_object<app::SearchOption__Enum>(get_class());
        }
    } // namespace SearchOption__Enum
} // namespace app::classes::types
