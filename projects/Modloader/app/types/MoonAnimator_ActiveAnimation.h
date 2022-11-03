#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_ActiveAnimation {
        inline app::MoonAnimator_ActiveAnimation__Class** type_info = (app::MoonAnimator_ActiveAnimation__Class**)(modloader::win::memory::resolve_rva(0x04773BA0));
        inline app::MoonAnimator_ActiveAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_ActiveAnimation__Class>(type_info, "Moon", "MoonAnimator", "ActiveAnimation");
        }
        inline app::MoonAnimator_ActiveAnimation* create() {
            return il2cpp::create_object<app::MoonAnimator_ActiveAnimation>(get_class());
        }
        inline app::MoonAnimator_ActiveAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_ActiveAnimation__Array>(get_class(), size);
        }
        inline app::MoonAnimator_ActiveAnimation__Array* create_array(const std::vector<app::MoonAnimator_ActiveAnimation*>& items) {
            return il2cpp::array_new<app::MoonAnimator_ActiveAnimation__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_ActiveAnimation
} // namespace app::classes::types
