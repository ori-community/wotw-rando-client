#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationCurveExtensions_TangentDirection__Enum__Class.h>
#include <Modloader/app/structs/AnimationCurveExtensions_TangentDirection__Enum.h>

namespace app::classes::types {
    namespace AnimationCurveExtensions_TangentDirection__Enum {
        namespace {
            inline app::AnimationCurveExtensions_TangentDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationCurveExtensions_TangentDirection__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationCurveExtensions_TangentDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationCurveExtensions_TangentDirection__Enum__Class>(type_info, "Moon.Extensions", "AnimationCurveExtensions", "TangentDirection");
        }
        inline app::AnimationCurveExtensions_TangentDirection__Enum* create() {
            return il2cpp::create_object<app::AnimationCurveExtensions_TangentDirection__Enum>(get_class());
        }
    } // namespace AnimationCurveExtensions_TangentDirection__Enum
} // namespace app::classes::types
