#pragma once
#include <Modloader/app/structs/LeashHookAnimator.h>
#include <Modloader/app/structs/LeashHookAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeashHookAnimator {
        inline app::LeashHookAnimator__Class** type_info() {
            static app::LeashHookAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeashHookAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472F880));
            }
            return cache;
        }
        inline app::LeashHookAnimator__Class* get_class() {
            return il2cpp::get_class<app::LeashHookAnimator__Class>(type_info(), "", "LeashHookAnimator");
        }
        inline app::LeashHookAnimator* create() {
            return il2cpp::create_object<app::LeashHookAnimator>(get_class());
        }
    } // namespace LeashHookAnimator
} // namespace app::classes::types
