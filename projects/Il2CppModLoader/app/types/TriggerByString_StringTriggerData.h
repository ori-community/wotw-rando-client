#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerByString_StringTriggerData {
        namespace {
            app::TriggerByString_StringTriggerData__Class* type_info_ref = nullptr;
        }
        app::TriggerByString_StringTriggerData__Class** type_info = &type_info_ref;
        inline app::TriggerByString_StringTriggerData__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerByString_StringTriggerData__Class>(type_info, "", "TriggerByString", "StringTriggerData");
        }
        inline app::TriggerByString_StringTriggerData* create() {
            return il2cpp::create_object<app::TriggerByString_StringTriggerData>(get_class());
        }
    } // namespace TriggerByString_StringTriggerData
} // namespace app::classes::types
