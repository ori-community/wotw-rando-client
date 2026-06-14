#pragma once
#include <Modloader/app/structs/GameInfo__Array.h>
#include <Modloader/app/structs/GameInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameInfo__Array {
        inline app::GameInfo__Array__Class** type_info() {
            static app::GameInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GameInfo__Array__Class>(type_info(), "PlayFab.ClientModels", "GameInfo[]");
        }
        inline app::GameInfo__Array* create() {
            return il2cpp::create_object<app::GameInfo__Array>(get_class());
        }
    } // namespace GameInfo__Array
} // namespace app::classes::types
