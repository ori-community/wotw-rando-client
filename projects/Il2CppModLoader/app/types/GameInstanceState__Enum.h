#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameInstanceState__Enum {
        namespace {
            inline app::GameInstanceState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GameInstanceState__Enum__Class** type_info = &type_info_ref;
        inline app::GameInstanceState__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameInstanceState__Enum__Class>(type_info, "PlayFab.ClientModels", "GameInstanceState");
        }
        inline app::GameInstanceState__Enum* create() {
            return il2cpp::create_object<app::GameInstanceState__Enum>(get_class());
        }
    } // namespace GameInstanceState__Enum
} // namespace app::classes::types
