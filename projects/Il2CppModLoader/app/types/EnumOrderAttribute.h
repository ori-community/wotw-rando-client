#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumOrderAttribute {
        inline app::EnumOrderAttribute__Class** type_info = (app::EnumOrderAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CBA8));
        inline app::EnumOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumOrderAttribute__Class>(type_info, "", "EnumOrderAttribute");
        }
        inline app::EnumOrderAttribute* create() {
            return il2cpp::create_object<app::EnumOrderAttribute>(get_class());
        }
    } // namespace EnumOrderAttribute
} // namespace app::classes::types
