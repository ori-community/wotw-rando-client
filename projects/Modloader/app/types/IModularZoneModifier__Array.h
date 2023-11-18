#pragma once
#include <Modloader/app/structs/IModularZoneModifier__Array.h>
#include <Modloader/app/structs/IModularZoneModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IModularZoneModifier__Array {
        inline app::IModularZoneModifier__Array__Class** type_info() {
            static app::IModularZoneModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IModularZoneModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IModularZoneModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::IModularZoneModifier__Array__Class>(type_info(), "", "IModularZoneModifier[]");
        }
        inline app::IModularZoneModifier__Array* create() {
            return il2cpp::create_object<app::IModularZoneModifier__Array>(get_class());
        }
    } // namespace IModularZoneModifier__Array
} // namespace app::classes::types
