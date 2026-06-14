#pragma once
#include <Modloader/app/structs/TransitionSetupData.h>
#include <Modloader/app/structs/TransitionSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransitionSetupData {
        inline app::TransitionSetupData__Class** type_info() {
            static app::TransitionSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransitionSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransitionSetupData__Class* get_class() {
            return il2cpp::get_class<app::TransitionSetupData__Class>(type_info(), "", "TransitionSetupData");
        }
        inline app::TransitionSetupData* create() {
            return il2cpp::create_object<app::TransitionSetupData>(get_class());
        }
    } // namespace TransitionSetupData
} // namespace app::classes::types
