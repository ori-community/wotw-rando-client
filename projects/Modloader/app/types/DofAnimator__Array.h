#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DofAnimator__Array {
        namespace {
            inline app::DofAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::DofAnimator__Array__Class** type_info = &type_info_ref;
        inline app::DofAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::DofAnimator__Array__Class>(type_info, "", "DofAnimator[]");
        }
        inline app::DofAnimator__Array* create() {
            return il2cpp::create_object<app::DofAnimator__Array>(get_class());
        }
    } // namespace DofAnimator__Array
} // namespace app::classes::types
