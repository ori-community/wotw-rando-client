#pragma once
#include <Modloader/app/structs/TransparencyTweenAnimator.h>
#include <Modloader/app/structs/TransparencyTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyTweenAnimator {
        inline app::TransparencyTweenAnimator__Class** type_info() {
            static app::TransparencyTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04749580));
            }
            return cache;
        }
        inline app::TransparencyTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparencyTweenAnimator__Class>(type_info(), "Moon.Timeline", "TransparencyTweenAnimator");
        }
        inline app::TransparencyTweenAnimator* create() {
            return il2cpp::create_object<app::TransparencyTweenAnimator>(get_class());
        }
    } // namespace TransparencyTweenAnimator
} // namespace app::classes::types
