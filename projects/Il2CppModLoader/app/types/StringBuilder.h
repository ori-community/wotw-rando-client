#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringBuilder {
        inline app::StringBuilder__Class** type_info = (app::StringBuilder__Class**)(modloader::win::memory::resolve_rva(0x04713A70));
        inline app::StringBuilder__Class* get_class() {
            return il2cpp::get_class<app::StringBuilder__Class>(type_info, "System.Text", "StringBuilder");
        }
        inline app::StringBuilder* create() {
            return il2cpp::create_object<app::StringBuilder>(get_class());
        }
    } // namespace StringBuilder
} // namespace app::classes::types
