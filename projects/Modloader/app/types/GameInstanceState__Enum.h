#pragma once
#include <Modloader/app/structs/GameInstanceState__Enum.h>
#include <Modloader/app/structs/GameInstanceState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameInstanceState__Enum {
        inline app::GameInstanceState__Enum__Class** type_info() {
            static app::GameInstanceState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameInstanceState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameInstanceState__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameInstanceState__Enum__Class>(type_info(), "PlayFab.ClientModels", "GameInstanceState");
        }
        inline app::GameInstanceState__Enum* create() {
            return il2cpp::create_object<app::GameInstanceState__Enum>(get_class());
        }
    } // namespace GameInstanceState__Enum
} // namespace app::classes::types
