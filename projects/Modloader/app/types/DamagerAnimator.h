#pragma once
#include <Modloader/app/structs/DamagerAnimator.h>
#include <Modloader/app/structs/DamagerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamagerAnimator {
        inline app::DamagerAnimator__Class** type_info() {
            static app::DamagerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamagerAnimator__Class**)(modloader::win::memory::resolve_rva(0x04716BD0));
            }
            return cache;
        }
        inline app::DamagerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DamagerAnimator__Class>(type_info(), "", "DamagerAnimator");
        }
        inline app::DamagerAnimator* create() {
            return il2cpp::create_object<app::DamagerAnimator>(get_class());
        }
    } // namespace DamagerAnimator
} // namespace app::classes::types
