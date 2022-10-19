#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator__Array {
        namespace {
            inline app::MoonAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator__Array__Class>(type_info, "Moon", "MoonAnimator[]");
        }
        inline app::MoonAnimator__Array* create() {
            return il2cpp::create_object<app::MoonAnimator__Array>(get_class());
        }
    } // namespace MoonAnimator__Array
} // namespace app::classes::types
