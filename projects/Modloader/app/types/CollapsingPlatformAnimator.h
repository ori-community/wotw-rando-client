#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollapsingPlatformAnimator__Class.h>
#include <Modloader/app/structs/CollapsingPlatformAnimator.h>

namespace app::classes::types {
    namespace CollapsingPlatformAnimator {
        namespace {
            inline app::CollapsingPlatformAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CollapsingPlatformAnimator__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatformAnimator__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformAnimator__Class>(type_info, "", "CollapsingPlatformAnimator");
        }
        inline app::CollapsingPlatformAnimator* create() {
            return il2cpp::create_object<app::CollapsingPlatformAnimator>(get_class());
        }
    } // namespace CollapsingPlatformAnimator
} // namespace app::classes::types
