#pragma once
#include <Modloader/app/structs/TwistAnimationSet.h>
#include <Modloader/app/structs/TwistAnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TwistAnimationSet {
        inline app::TwistAnimationSet__Class** type_info() {
            static app::TwistAnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TwistAnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TwistAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::TwistAnimationSet__Class>(type_info(), "", "TwistAnimationSet");
        }
        inline app::TwistAnimationSet* create() {
            return il2cpp::create_object<app::TwistAnimationSet>(get_class());
        }
    } // namespace TwistAnimationSet
} // namespace app::classes::types
