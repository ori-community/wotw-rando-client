#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator__Array {
        namespace {
            inline app::LegacyTransparencyAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTransparencyAnimator__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTransparencyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparencyAnimator__Array__Class>(type_info, "", "LegacyTransparencyAnimator[]");
        }
        inline app::LegacyTransparencyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator__Array>(get_class());
        }
    } // namespace LegacyTransparencyAnimator__Array
} // namespace app::classes::types
