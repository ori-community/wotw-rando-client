#pragma once
#include <Modloader/app/structs/UberTextureSettingsAnimator.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTextureSettingsAnimator {
        inline app::UberTextureSettingsAnimator__Class** type_info() {
            static app::UberTextureSettingsAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberTextureSettingsAnimator__Class**)(modloader::win::memory::resolve_rva(0x04720A00));
            }
            return cache;
        }
        inline app::UberTextureSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberTextureSettingsAnimator__Class>(type_info(), "", "UberTextureSettingsAnimator");
        }
        inline app::UberTextureSettingsAnimator* create() {
            return il2cpp::create_object<app::UberTextureSettingsAnimator>(get_class());
        }
    } // namespace UberTextureSettingsAnimator
} // namespace app::classes::types
