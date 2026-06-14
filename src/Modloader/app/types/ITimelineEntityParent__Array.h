#pragma once
#include <Modloader/app/structs/ITimelineEntityParent__Array.h>
#include <Modloader/app/structs/ITimelineEntityParent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineEntityParent__Array {
        inline app::ITimelineEntityParent__Array__Class** type_info() {
            static app::ITimelineEntityParent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineEntityParent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineEntityParent__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntityParent__Array__Class>(type_info(), "Moon.Timeline", "ITimelineEntityParent[]");
        }
        inline app::ITimelineEntityParent__Array* create() {
            return il2cpp::create_object<app::ITimelineEntityParent__Array>(get_class());
        }
    } // namespace ITimelineEntityParent__Array
} // namespace app::classes::types
