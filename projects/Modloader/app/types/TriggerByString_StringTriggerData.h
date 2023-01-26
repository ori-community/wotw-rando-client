#pragma once
#include <Modloader/app/structs/TriggerByString_StringTriggerData.h>
#include <Modloader/app/structs/TriggerByString_StringTriggerData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerByString_StringTriggerData {
        inline app::TriggerByString_StringTriggerData__Class** type_info() {
            static app::TriggerByString_StringTriggerData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerByString_StringTriggerData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerByString_StringTriggerData__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerByString_StringTriggerData__Class>(type_info(), "", "TriggerByString", "StringTriggerData");
        }
        inline app::TriggerByString_StringTriggerData* create() {
            return il2cpp::create_object<app::TriggerByString_StringTriggerData>(get_class());
        }
    } // namespace TriggerByString_StringTriggerData
} // namespace app::classes::types
