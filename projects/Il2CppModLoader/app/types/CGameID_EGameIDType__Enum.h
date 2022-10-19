#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CGameID_EGameIDType__Enum {
        namespace {
            inline app::CGameID_EGameIDType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CGameID_EGameIDType__Enum__Class** type_info = &type_info_ref;
        inline app::CGameID_EGameIDType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CGameID_EGameIDType__Enum__Class>(type_info, "Steamworks", "CGameID", "EGameIDType");
        }
        inline app::CGameID_EGameIDType__Enum* create() {
            return il2cpp::create_object<app::CGameID_EGameIDType__Enum>(get_class());
        }
    } // namespace CGameID_EGameIDType__Enum
} // namespace app::classes::types
