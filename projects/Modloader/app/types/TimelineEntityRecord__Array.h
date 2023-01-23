#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineEntityRecord__Array__Class.h>
#include <Modloader/app/structs/TimelineEntityRecord__Array.h>

namespace app::classes::types {
    namespace TimelineEntityRecord__Array {
        namespace {
            inline app::TimelineEntityRecord__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimelineEntityRecord__Array__Class** type_info = &type_info_ref;
        inline app::TimelineEntityRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityRecord__Array__Class>(type_info, "Moon.Timeline", "TimelineEntityRecord[]");
        }
        inline app::TimelineEntityRecord__Array* create() {
            return il2cpp::create_object<app::TimelineEntityRecord__Array>(get_class());
        }
    } // namespace TimelineEntityRecord__Array
} // namespace app::classes::types
