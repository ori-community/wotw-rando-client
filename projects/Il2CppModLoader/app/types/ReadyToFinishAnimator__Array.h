#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadyToFinishAnimator__Array {
        namespace {
            inline app::ReadyToFinishAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReadyToFinishAnimator__Array__Class** type_info = &type_info_ref;
        inline app::ReadyToFinishAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::ReadyToFinishAnimator__Array__Class>(type_info, "Moon.Timeline", "ReadyToFinishAnimator[]");
        }
        inline app::ReadyToFinishAnimator__Array* create() {
            return il2cpp::create_object<app::ReadyToFinishAnimator__Array>(get_class());
        }
    } // namespace ReadyToFinishAnimator__Array
} // namespace app::classes::types
