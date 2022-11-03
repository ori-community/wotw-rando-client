#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_DirectBlendInstance__Array {
        namespace {
            inline app::MoonAnimator_DirectBlendInstance__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_DirectBlendInstance__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_DirectBlendInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_DirectBlendInstance__Array__Class>(type_info, "Moon", "MoonAnimator+DirectBlendInstance[]");
        }
        inline app::MoonAnimator_DirectBlendInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_DirectBlendInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_DirectBlendInstance__Array
} // namespace app::classes::types
