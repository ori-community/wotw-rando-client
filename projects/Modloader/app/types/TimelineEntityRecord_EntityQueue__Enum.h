#pragma once
#include <Modloader/app/structs/TimelineEntityRecord_EntityQueue__Enum.h>
#include <Modloader/app/structs/TimelineEntityRecord_EntityQueue__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityRecord_EntityQueue__Enum {
        inline app::TimelineEntityRecord_EntityQueue__Enum__Class** type_info() {
            static app::TimelineEntityRecord_EntityQueue__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntityRecord_EntityQueue__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntityRecord_EntityQueue__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEntityRecord_EntityQueue__Enum__Class>(type_info(), "Moon.Timeline", "TimelineEntityRecord", "EntityQueue");
        }
        inline app::TimelineEntityRecord_EntityQueue__Enum* create() {
            return il2cpp::create_object<app::TimelineEntityRecord_EntityQueue__Enum>(get_class());
        }
    } // namespace TimelineEntityRecord_EntityQueue__Enum
} // namespace app::classes::types
