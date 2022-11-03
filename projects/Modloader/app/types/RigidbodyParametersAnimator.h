#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyParametersAnimator {
        namespace {
            inline app::RigidbodyParametersAnimator__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyParametersAnimator__Class** type_info = &type_info_ref;
        inline app::RigidbodyParametersAnimator__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyParametersAnimator__Class>(type_info, "Moon.Timeline", "RigidbodyParametersAnimator");
        }
        inline app::RigidbodyParametersAnimator* create() {
            return il2cpp::create_object<app::RigidbodyParametersAnimator>(get_class());
        }
    } // namespace RigidbodyParametersAnimator
} // namespace app::classes::types
