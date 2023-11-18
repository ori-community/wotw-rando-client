#pragma once
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/LegacyAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimator__Array {
        inline app::LegacyAnimator__Array__Class** type_info() {
            static app::LegacyAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x047287A0));
            }
            return cache;
        }
        inline app::LegacyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimator__Array__Class>(type_info(), "", "LegacyAnimator[]");
        }
        inline app::LegacyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyAnimator__Array>(get_class());
        }
    } // namespace LegacyAnimator__Array
} // namespace app::classes::types
