#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SuspendRenderingAnimator__Class.h>
#include <Modloader/app/structs/SuspendRenderingAnimator.h>

namespace app::classes::types {
    namespace SuspendRenderingAnimator {
        namespace {
            inline app::SuspendRenderingAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SuspendRenderingAnimator__Class** type_info = &type_info_ref;
        inline app::SuspendRenderingAnimator__Class* get_class() {
            return il2cpp::get_class<app::SuspendRenderingAnimator__Class>(type_info, "Moon.Timeline", "SuspendRenderingAnimator");
        }
        inline app::SuspendRenderingAnimator* create() {
            return il2cpp::create_object<app::SuspendRenderingAnimator>(get_class());
        }
    } // namespace SuspendRenderingAnimator
} // namespace app::classes::types
