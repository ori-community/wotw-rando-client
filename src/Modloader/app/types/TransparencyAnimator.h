#pragma once
#include <Modloader/app/structs/TransparencyAnimator.h>
#include <Modloader/app/structs/TransparencyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimator {
        inline app::TransparencyAnimator__Class** type_info() {
            static app::TransparencyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyAnimator__Class**)(modloader::win::memory::resolve_rva(0x047706A8));
            }
            return cache;
        }
        inline app::TransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimator__Class>(type_info(), "Moon.Timeline", "TransparencyAnimator");
        }
        inline app::TransparencyAnimator* create() {
            return il2cpp::create_object<app::TransparencyAnimator>(get_class());
        }
    } // namespace TransparencyAnimator
} // namespace app::classes::types
