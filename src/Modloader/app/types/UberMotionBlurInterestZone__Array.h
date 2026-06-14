#pragma once
#include <Modloader/app/structs/UberMotionBlurInterestZone__Array.h>
#include <Modloader/app/structs/UberMotionBlurInterestZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone__Array {
        inline app::UberMotionBlurInterestZone__Array__Class** type_info() {
            static app::UberMotionBlurInterestZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberMotionBlurInterestZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberMotionBlurInterestZone__Array__Class* get_class() {
            return il2cpp::get_class<app::UberMotionBlurInterestZone__Array__Class>(type_info(), "", "UberMotionBlurInterestZone[]");
        }
        inline app::UberMotionBlurInterestZone__Array* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone__Array>(get_class());
        }
    } // namespace UberMotionBlurInterestZone__Array
} // namespace app::classes::types
