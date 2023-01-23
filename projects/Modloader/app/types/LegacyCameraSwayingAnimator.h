#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyCameraSwayingAnimator__Class.h>
#include <Modloader/app/structs/LegacyCameraSwayingAnimator.h>

namespace app::classes::types {
    namespace LegacyCameraSwayingAnimator {
        namespace {
            inline app::LegacyCameraSwayingAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyCameraSwayingAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyCameraSwayingAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCameraSwayingAnimator__Class>(type_info, "", "LegacyCameraSwayingAnimator");
        }
        inline app::LegacyCameraSwayingAnimator* create() {
            return il2cpp::create_object<app::LegacyCameraSwayingAnimator>(get_class());
        }
    } // namespace LegacyCameraSwayingAnimator
} // namespace app::classes::types
