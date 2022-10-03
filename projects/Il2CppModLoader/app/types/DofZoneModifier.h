#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DofZoneModifier {
        namespace {
            app::DofZoneModifier__Class* type_info_ref = nullptr;
        }
        app::DofZoneModifier__Class** type_info = &type_info_ref;
        inline app::DofZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::DofZoneModifier__Class>(type_info, "", "DofZoneModifier");
        }
        inline app::DofZoneModifier* create() {
            return il2cpp::create_object<app::DofZoneModifier>(get_class());
        }
    } // namespace DofZoneModifier
} // namespace app::classes::types
