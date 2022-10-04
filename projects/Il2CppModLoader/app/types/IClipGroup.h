#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IClipGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IClipGroup__Class** type_info;
        inline app::IClipGroup__Class* get_class() {
            return il2cpp::get_class<app::IClipGroup__Class>(type_info, "", "IClipGroup");
        }
        inline app::IClipGroup* create() {
            return il2cpp::create_object<app::IClipGroup>(get_class());
        }
    } // namespace IClipGroup
} // namespace app::classes::types
