#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundAnimator {
        inline app::SoundAnimator__Class** type_info = (app::SoundAnimator__Class**)(modloader::win::memory::resolve_rva(0x04780E88));
        inline app::SoundAnimator__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimator__Class>(type_info, "", "SoundAnimator");
        }
        inline app::SoundAnimator* create() {
            return il2cpp::create_object<app::SoundAnimator>(get_class());
        }
    } // namespace SoundAnimator
} // namespace app::classes::types
