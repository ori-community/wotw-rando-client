#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbstractEventData {
        namespace {
            app::AbstractEventData__Class* type_info_ref = nullptr;
        }
        app::AbstractEventData__Class** type_info = &type_info_ref;
        inline app::AbstractEventData__Class* get_class() {
            return il2cpp::get_class<app::AbstractEventData__Class>(type_info, "UnityEngine.EventSystems", "AbstractEventData");
        }
        inline app::AbstractEventData* create() {
            return il2cpp::create_object<app::AbstractEventData>(get_class());
        }
    } // namespace AbstractEventData
} // namespace app::classes::types
