#pragma once
#include <Modloader/app/structs/NaruController_AnimationSet.h>
#include <Modloader/app/structs/NaruController_AnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NaruController_AnimationSet {
        inline app::NaruController_AnimationSet__Class** type_info() {
            static app::NaruController_AnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NaruController_AnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NaruController_AnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::NaruController_AnimationSet__Class>(type_info(), "", "NaruController", "AnimationSet");
        }
        inline app::NaruController_AnimationSet* create() {
            return il2cpp::create_object<app::NaruController_AnimationSet>(get_class());
        }
    } // namespace NaruController_AnimationSet
} // namespace app::classes::types
