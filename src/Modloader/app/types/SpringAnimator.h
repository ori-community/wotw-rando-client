#pragma once
#include <Modloader/app/structs/SpringAnimator.h>
#include <Modloader/app/structs/SpringAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpringAnimator {
        inline app::SpringAnimator__Class** type_info() {
            static app::SpringAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpringAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478EA30));
            }
            return cache;
        }
        inline app::SpringAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpringAnimator__Class>(type_info(), "", "SpringAnimator");
        }
        inline app::SpringAnimator* create() {
            return il2cpp::create_object<app::SpringAnimator>(get_class());
        }
    } // namespace SpringAnimator
} // namespace app::classes::types
