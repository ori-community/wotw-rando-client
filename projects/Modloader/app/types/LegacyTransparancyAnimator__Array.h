#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparancyAnimator__Array {
        namespace {
            inline app::LegacyTransparancyAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTransparancyAnimator__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTransparancyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparancyAnimator__Array__Class>(type_info, "", "LegacyTransparancyAnimator[]");
        }
        inline app::LegacyTransparancyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyTransparancyAnimator__Array>(get_class());
        }
    } // namespace LegacyTransparancyAnimator__Array
} // namespace app::classes::types
