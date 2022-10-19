#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceDistortionModifier {
        inline app::TurbulenceDistortionModifier__Class** type_info = (app::TurbulenceDistortionModifier__Class**)(modloader::win::memory::resolve_rva(0x0474CD78));
        inline app::TurbulenceDistortionModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceDistortionModifier__Class>(type_info, "", "TurbulenceDistortionModifier");
        }
        inline app::TurbulenceDistortionModifier* create() {
            return il2cpp::create_object<app::TurbulenceDistortionModifier>(get_class());
        }
    } // namespace TurbulenceDistortionModifier
} // namespace app::classes::types
