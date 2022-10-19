#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyColorFlashAnimator {
        inline app::LegacyColorFlashAnimator__Class** type_info = (app::LegacyColorFlashAnimator__Class**)(modloader::win::memory::resolve_rva(0x04709B30));
        inline app::LegacyColorFlashAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyColorFlashAnimator__Class>(type_info, "", "LegacyColorFlashAnimator");
        }
        inline app::LegacyColorFlashAnimator* create() {
            return il2cpp::create_object<app::LegacyColorFlashAnimator>(get_class());
        }
    } // namespace LegacyColorFlashAnimator
} // namespace app::classes::types
