#pragma once
#include <Modloader/app/structs/Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
        inline app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class** type_info() {
            static app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class* get_class() {
            return il2cpp::get_class<app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class>(type_info(), "System.Collections.Generic", "Queue`1[Moon.Timeline.IPoolableTimelineEntity][]");
        }
        inline app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array* create() {
            return il2cpp::create_object<app::Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array>(get_class());
        }
    } // namespace Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array
} // namespace app::classes::types
