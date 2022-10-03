#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IModularZoneModifier__Array {
        namespace {
            app::IModularZoneModifier__Array__Class* type_info_ref = nullptr;
        }
        app::IModularZoneModifier__Array__Class** type_info = &type_info_ref;
        inline app::IModularZoneModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::IModularZoneModifier__Array__Class>(type_info, "", "IModularZoneModifier[]");
        }
        inline app::IModularZoneModifier__Array* create() {
            return il2cpp::create_object<app::IModularZoneModifier__Array>(get_class());
        }
    } // namespace IModularZoneModifier__Array
} // namespace app::classes::types
