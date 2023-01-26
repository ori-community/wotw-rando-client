#pragma once
#include <Modloader/app/structs/UberColorAnimator.h>
#include <Modloader/app/structs/UberColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberColorAnimator {
        inline app::UberColorAnimator__Class** type_info() {
            static app::UberColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04796258));
            }
            return cache;
        }
        inline app::UberColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberColorAnimator__Class>(type_info(), "", "UberColorAnimator");
        }
        inline app::UberColorAnimator* create() {
            return il2cpp::create_object<app::UberColorAnimator>(get_class());
        }
    } // namespace UberColorAnimator
} // namespace app::classes::types
