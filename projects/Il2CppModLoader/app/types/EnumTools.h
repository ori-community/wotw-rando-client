#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumTools {
        inline app::EnumTools__Class** type_info = (app::EnumTools__Class**)(modloader::win::memory::resolve_rva(0x04752638));
        inline app::EnumTools__Class* get_class() {
            return il2cpp::get_class<app::EnumTools__Class>(type_info, "", "EnumTools");
        }
        inline app::EnumTools* create() {
            return il2cpp::create_object<app::EnumTools>(get_class());
        }
    } // namespace EnumTools
} // namespace app::classes::types
