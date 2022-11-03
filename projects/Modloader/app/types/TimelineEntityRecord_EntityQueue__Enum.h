#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineEntityRecord_EntityQueue__Enum {
        namespace {
            inline app::TimelineEntityRecord_EntityQueue__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityRecord_EntityQueue__Enum__Class** type_info = &type_info_ref;
        inline app::TimelineEntityRecord_EntityQueue__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEntityRecord_EntityQueue__Enum__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord", "EntityQueue");
        }
        inline app::TimelineEntityRecord_EntityQueue__Enum* create() {
            return il2cpp::create_object<app::TimelineEntityRecord_EntityQueue__Enum>(get_class());
        }
    } // namespace TimelineEntityRecord_EntityQueue__Enum
} // namespace app::classes::types
