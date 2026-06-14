#pragma once
#include <Modloader/app/structs/DisplayNameFilteredEventData.h>
#include <Modloader/app/structs/DisplayNameFilteredEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisplayNameFilteredEventData {
        inline app::DisplayNameFilteredEventData__Class** type_info() {
            static app::DisplayNameFilteredEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisplayNameFilteredEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisplayNameFilteredEventData__Class* get_class() {
            return il2cpp::get_class<app::DisplayNameFilteredEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "DisplayNameFilteredEventData");
        }
        inline app::DisplayNameFilteredEventData* create() {
            return il2cpp::create_object<app::DisplayNameFilteredEventData>(get_class());
        }
    } // namespace DisplayNameFilteredEventData
} // namespace app::classes::types
