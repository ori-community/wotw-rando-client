#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineEntityParent__Array__Class.h>
#include <Modloader/app/structs/ITimelineEntityParent__Array.h>

namespace app::classes::types {
    namespace ITimelineEntityParent__Array {
        namespace {
            inline app::ITimelineEntityParent__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineEntityParent__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineEntityParent__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityParent__Array__Class>(type_info, "Moon.Timeline", "ITimelineEntityParent[]");
        }
        inline app::ITimelineEntityParent__Array* create() {
            return il2cpp::create_object<app::ITimelineEntityParent__Array>(get_class());
        }
    } // namespace ITimelineEntityParent__Array
} // namespace app::classes::types
