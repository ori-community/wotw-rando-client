#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContinentCode__Enum_2 {
        namespace {
            inline app::ContinentCode__Enum_2__Class* type_info_ref = nullptr;
        }
        inline app::ContinentCode__Enum_2__Class** type_info = &type_info_ref;
        inline app::ContinentCode__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::ContinentCode__Enum_2__Class>(type_info, "PlayFab.PlayStreamModels", "ContinentCode");
        }
        inline app::ContinentCode__Enum_2* create() {
            return il2cpp::create_object<app::ContinentCode__Enum_2>(get_class());
        }
    } // namespace ContinentCode__Enum_2
} // namespace app::classes::types
