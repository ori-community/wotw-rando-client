#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAnimator__Array {
        inline app::LegacyAnimator__Array__Class** type_info = (app::LegacyAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x047287A0));
        inline app::LegacyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimator__Array__Class>(type_info, "", "LegacyAnimator[]");
        }
        inline app::LegacyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyAnimator__Array>(get_class());
        }
    } // namespace LegacyAnimator__Array
} // namespace app::classes::types
