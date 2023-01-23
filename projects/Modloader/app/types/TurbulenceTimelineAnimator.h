#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceTimelineAnimator__Class.h>
#include <Modloader/app/structs/TurbulenceTimelineAnimator.h>

namespace app::classes::types {
    namespace TurbulenceTimelineAnimator {
        namespace {
            inline app::TurbulenceTimelineAnimator__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceTimelineAnimator__Class** type_info = &type_info_ref;
        inline app::TurbulenceTimelineAnimator__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTimelineAnimator__Class>(type_info, "", "TurbulenceTimelineAnimator");
        }
        inline app::TurbulenceTimelineAnimator* create() {
            return il2cpp::create_object<app::TurbulenceTimelineAnimator>(get_class());
        }
    } // namespace TurbulenceTimelineAnimator
} // namespace app::classes::types
