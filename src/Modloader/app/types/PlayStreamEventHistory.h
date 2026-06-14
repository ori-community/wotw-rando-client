#pragma once
#include <Modloader/app/structs/PlayStreamEventHistory.h>
#include <Modloader/app/structs/PlayStreamEventHistory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayStreamEventHistory {
        inline app::PlayStreamEventHistory__Class** type_info() {
            static app::PlayStreamEventHistory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayStreamEventHistory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayStreamEventHistory__Class* get_class() {
            return il2cpp::get_class<app::PlayStreamEventHistory__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayStreamEventHistory");
        }
        inline app::PlayStreamEventHistory* create() {
            return il2cpp::create_object<app::PlayStreamEventHistory>(get_class());
        }
    } // namespace PlayStreamEventHistory
} // namespace app::classes::types
