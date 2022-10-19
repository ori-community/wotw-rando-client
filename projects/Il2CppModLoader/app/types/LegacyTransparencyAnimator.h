#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator {
        inline app::LegacyTransparencyAnimator__Class** type_info = (app::LegacyTransparencyAnimator__Class**)(modloader::win::memory::resolve_rva(0x04755F48));
        inline app::LegacyTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparencyAnimator__Class>(type_info, "", "LegacyTransparencyAnimator");
        }
        inline app::LegacyTransparencyAnimator* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator>(get_class());
        }
        inline app::LegacyTransparencyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTransparencyAnimator__Array>(get_class(), size);
        }
        inline app::LegacyTransparencyAnimator__Array* create_array(const std::vector<app::LegacyTransparencyAnimator*>& items) {
            return il2cpp::array_new<app::LegacyTransparencyAnimator__Array>(get_class(), items);
        }
    } // namespace LegacyTransparencyAnimator
} // namespace app::classes::types
