#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QueryTriggerInteraction__Enum {
        namespace {
            inline app::QueryTriggerInteraction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::QueryTriggerInteraction__Enum__Class** type_info = &type_info_ref;
        inline app::QueryTriggerInteraction__Enum__Class* get_class() {
            return il2cpp::get_class<app::QueryTriggerInteraction__Enum__Class>(type_info, "UnityEngine", "QueryTriggerInteraction");
        }
        inline app::QueryTriggerInteraction__Enum* create() {
            return il2cpp::create_object<app::QueryTriggerInteraction__Enum>(get_class());
        }
    } // namespace QueryTriggerInteraction__Enum
} // namespace app::classes::types
