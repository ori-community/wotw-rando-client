#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_BlendInstance__Array {
        namespace {
            inline app::MoonAnimator_BlendInstance__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_BlendInstance__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_BlendInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_BlendInstance__Array__Class>(type_info, "Moon", "MoonAnimator+BlendInstance[]");
        }
        inline app::MoonAnimator_BlendInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_BlendInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_BlendInstance__Array
} // namespace app::classes::types
