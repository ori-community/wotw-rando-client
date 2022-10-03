#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerZone {
        namespace {
            app::TriggerZone__Class* type_info_ref = nullptr;
        }
        app::TriggerZone__Class** type_info = &type_info_ref;
        inline app::TriggerZone__Class* get_class() {
            return il2cpp::get_class<app::TriggerZone__Class>(type_info, "Moon", "TriggerZone");
        }
        inline app::TriggerZone* create() {
            return il2cpp::create_object<app::TriggerZone>(get_class());
        }
    } // namespace TriggerZone
} // namespace app::classes::types
