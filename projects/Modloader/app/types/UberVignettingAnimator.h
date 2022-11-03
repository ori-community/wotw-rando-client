#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberVignettingAnimator {
        namespace {
            inline app::UberVignettingAnimator__Class* type_info_ref = nullptr;
        }
        inline app::UberVignettingAnimator__Class** type_info = &type_info_ref;
        inline app::UberVignettingAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberVignettingAnimator__Class>(type_info, "", "UberVignettingAnimator");
        }
        inline app::UberVignettingAnimator* create() {
            return il2cpp::create_object<app::UberVignettingAnimator>(get_class());
        }
    } // namespace UberVignettingAnimator
} // namespace app::classes::types
