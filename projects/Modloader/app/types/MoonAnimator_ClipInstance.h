#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_ClipInstance {
        namespace {
            inline app::MoonAnimator_ClipInstance__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_ClipInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_ClipInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_ClipInstance__Class>(type_info, "Moon", "MoonAnimator", "ClipInstance");
        }
        inline app::MoonAnimator_ClipInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_ClipInstance>(get_class());
        }
        inline app::MoonAnimator_ClipInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_ClipInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_ClipInstance__Array* create_array(const std::vector<app::MoonAnimator_ClipInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_ClipInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_ClipInstance
} // namespace app::classes::types
