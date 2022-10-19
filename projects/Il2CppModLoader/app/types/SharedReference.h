#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SharedReference {
        inline app::SharedReference__Class** type_info = (app::SharedReference__Class**)(modloader::win::memory::resolve_rva(0x047630D8));
        inline app::SharedReference__Class* get_class() {
            return il2cpp::get_class<app::SharedReference__Class>(type_info, "System.Text.RegularExpressions", "SharedReference");
        }
        inline app::SharedReference* create() {
            return il2cpp::create_object<app::SharedReference>(get_class());
        }
    } // namespace SharedReference
} // namespace app::classes::types
