#pragma once
#include <Modloader/app/structs/XProgression.h>
#include <Modloader/app/structs/XProgression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XProgression {
        inline app::XProgression__Class** type_info() {
            static app::XProgression__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XProgression__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XProgression__Class* get_class() {
            return il2cpp::get_class<app::XProgression__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XProgression");
        }
        inline app::XProgression* create() {
            return il2cpp::create_object<app::XProgression>(get_class());
        }
    } // namespace XProgression
} // namespace app::classes::types
