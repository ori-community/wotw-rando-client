#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor__Class.h>
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor.h>

namespace app::classes::types {
    namespace UnityModelAnimationCurveProcessor {
        namespace {
            inline app::UnityModelAnimationCurveProcessor__Class* type_info_ref = nullptr;
        }
        inline app::UnityModelAnimationCurveProcessor__Class** type_info = &type_info_ref;
        inline app::UnityModelAnimationCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::UnityModelAnimationCurveProcessor__Class>(type_info, "", "UnityModelAnimationCurveProcessor");
        }
        inline app::UnityModelAnimationCurveProcessor* create() {
            return il2cpp::create_object<app::UnityModelAnimationCurveProcessor>(get_class());
        }
    } // namespace UnityModelAnimationCurveProcessor
} // namespace app::classes::types
