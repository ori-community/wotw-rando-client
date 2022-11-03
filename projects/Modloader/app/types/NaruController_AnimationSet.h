#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NaruController_AnimationSet {
        namespace {
            inline app::NaruController_AnimationSet__Class* type_info_ref = nullptr;
        }
        inline app::NaruController_AnimationSet__Class** type_info = &type_info_ref;
        inline app::NaruController_AnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::NaruController_AnimationSet__Class>(type_info, "", "NaruController", "AnimationSet");
        }
        inline app::NaruController_AnimationSet* create() {
            return il2cpp::create_object<app::NaruController_AnimationSet>(get_class());
        }
    } // namespace NaruController_AnimationSet
} // namespace app::classes::types
