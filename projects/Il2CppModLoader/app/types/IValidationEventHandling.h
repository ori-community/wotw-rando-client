#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IValidationEventHandling {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IValidationEventHandling__Class** type_info;
        inline app::IValidationEventHandling__Class* get_class() {
            return il2cpp::get_class<app::IValidationEventHandling__Class>(type_info, "System.Xml", "IValidationEventHandling");
        }
        inline app::IValidationEventHandling* create() {
            return il2cpp::create_object<app::IValidationEventHandling>(get_class());
        }
    } // namespace IValidationEventHandling
} // namespace app::classes::types
