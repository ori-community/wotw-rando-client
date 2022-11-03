#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberTextureSettingsAnimator {
        inline app::UberTextureSettingsAnimator__Class** type_info = (app::UberTextureSettingsAnimator__Class**)(modloader::win::memory::resolve_rva(0x04720A00));
        inline app::UberTextureSettingsAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberTextureSettingsAnimator__Class>(type_info, "", "UberTextureSettingsAnimator");
        }
        inline app::UberTextureSettingsAnimator* create() {
            return il2cpp::create_object<app::UberTextureSettingsAnimator>(get_class());
        }
    } // namespace UberTextureSettingsAnimator
} // namespace app::classes::types
