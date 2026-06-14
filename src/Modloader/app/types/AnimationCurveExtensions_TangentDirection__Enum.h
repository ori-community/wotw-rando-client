#pragma once
#include <Modloader/app/structs/AnimationCurveExtensions_TangentDirection__Enum.h>
#include <Modloader/app/structs/AnimationCurveExtensions_TangentDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCurveExtensions_TangentDirection__Enum {
        inline app::AnimationCurveExtensions_TangentDirection__Enum__Class** type_info() {
            static app::AnimationCurveExtensions_TangentDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationCurveExtensions_TangentDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationCurveExtensions_TangentDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationCurveExtensions_TangentDirection__Enum__Class>(type_info(), "Moon.Extensions", "AnimationCurveExtensions", "TangentDirection");
        }
        inline app::AnimationCurveExtensions_TangentDirection__Enum* create() {
            return il2cpp::create_object<app::AnimationCurveExtensions_TangentDirection__Enum>(get_class());
        }
    } // namespace AnimationCurveExtensions_TangentDirection__Enum
} // namespace app::classes::types
