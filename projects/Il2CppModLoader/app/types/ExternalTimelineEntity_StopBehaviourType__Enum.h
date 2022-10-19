#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalTimelineEntity_StopBehaviourType__Enum {
        namespace {
            inline app::ExternalTimelineEntity_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ExternalTimelineEntity_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::ExternalTimelineEntity_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalTimelineEntity_StopBehaviourType__Enum__Class>(type_info, "Moon.Timeline", "ExternalTimelineEntity", "StopBehaviourType");
        }
        inline app::ExternalTimelineEntity_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::ExternalTimelineEntity_StopBehaviourType__Enum>(get_class());
        }
    } // namespace ExternalTimelineEntity_StopBehaviourType__Enum
} // namespace app::classes::types
