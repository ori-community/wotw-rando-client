#pragma once
#include <Modloader/app/structs/RaceTargetIndicator.h>
#include <Modloader/app/structs/RaceTargetIndicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceTargetIndicator {
        inline app::RaceTargetIndicator__Class** type_info() {
            static app::RaceTargetIndicator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceTargetIndicator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceTargetIndicator__Class* get_class() {
            return il2cpp::get_class<app::RaceTargetIndicator__Class>(type_info(), "", "RaceTargetIndicator");
        }
        inline app::RaceTargetIndicator* create() {
            return il2cpp::create_object<app::RaceTargetIndicator>(get_class());
        }
    } // namespace RaceTargetIndicator
} // namespace app::classes::types
