#pragma once
#include <Modloader/app/structs/SentEmailEventData.h>
#include <Modloader/app/structs/SentEmailEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SentEmailEventData {
        inline app::SentEmailEventData__Class** type_info() {
            static app::SentEmailEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SentEmailEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SentEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::SentEmailEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "SentEmailEventData");
        }
        inline app::SentEmailEventData* create() {
            return il2cpp::create_object<app::SentEmailEventData>(get_class());
        }
    } // namespace SentEmailEventData
} // namespace app::classes::types
