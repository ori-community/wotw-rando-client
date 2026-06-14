#pragma once
#include <Modloader/app/structs/PlayStreamEventBase.h>
#include <Modloader/app/structs/PlayStreamEventBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayStreamEventBase {
        inline app::PlayStreamEventBase__Class** type_info() {
            static app::PlayStreamEventBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayStreamEventBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayStreamEventBase__Class* get_class() {
            return il2cpp::get_class<app::PlayStreamEventBase__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayStreamEventBase");
        }
        inline app::PlayStreamEventBase* create() {
            return il2cpp::create_object<app::PlayStreamEventBase>(get_class());
        }
    } // namespace PlayStreamEventBase
} // namespace app::classes::types
