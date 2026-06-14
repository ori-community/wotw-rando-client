#pragma once
#include <Modloader/app/structs/TitleProfileViewConstraintsChangedEventData.h>
#include <Modloader/app/structs/TitleProfileViewConstraintsChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleProfileViewConstraintsChangedEventData {
        inline app::TitleProfileViewConstraintsChangedEventData__Class** type_info() {
            static app::TitleProfileViewConstraintsChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleProfileViewConstraintsChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleProfileViewConstraintsChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleProfileViewConstraintsChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleProfileViewConstraintsChangedEventData");
        }
        inline app::TitleProfileViewConstraintsChangedEventData* create() {
            return il2cpp::create_object<app::TitleProfileViewConstraintsChangedEventData>(get_class());
        }
    } // namespace TitleProfileViewConstraintsChangedEventData
} // namespace app::classes::types
