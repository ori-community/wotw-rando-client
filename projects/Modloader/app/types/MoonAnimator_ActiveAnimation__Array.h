#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Array__Class.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Array.h>

namespace app::classes::types {
    namespace MoonAnimator_ActiveAnimation__Array {
        namespace {
            inline app::MoonAnimator_ActiveAnimation__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_ActiveAnimation__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_ActiveAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_ActiveAnimation__Array__Class>(type_info, "Moon", "MoonAnimator+ActiveAnimation[]");
        }
        inline app::MoonAnimator_ActiveAnimation__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_ActiveAnimation__Array>(get_class());
        }
    } // namespace MoonAnimator_ActiveAnimation__Array
} // namespace app::classes::types
