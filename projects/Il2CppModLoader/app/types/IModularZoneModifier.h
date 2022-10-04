#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IModularZoneModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IModularZoneModifier__Class** type_info;
        inline app::IModularZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::IModularZoneModifier__Class>(type_info, "", "IModularZoneModifier");
        }
        inline app::IModularZoneModifier* create() {
            return il2cpp::create_object<app::IModularZoneModifier>(get_class());
        }
        inline app::IModularZoneModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::IModularZoneModifier__Array>(get_class(), size);
        }
    } // namespace IModularZoneModifier
} // namespace app::classes::types
