#pragma once
#include <Modloader/app/structs/SoundAnimator.h>
#include <Modloader/app/structs/SoundAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAnimator {
        inline app::SoundAnimator__Class** type_info() {
            static app::SoundAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundAnimator__Class**)(modloader::win::memory::resolve_rva(0x04780E88));
            }
            return cache;
        }
        inline app::SoundAnimator__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimator__Class>(type_info(), "", "SoundAnimator");
        }
        inline app::SoundAnimator* create() {
            return il2cpp::create_object<app::SoundAnimator>(get_class());
        }
    } // namespace SoundAnimator
} // namespace app::classes::types
