#pragma once
#include <Modloader/app/structs/IPoolableTimelineEntity__Array.h>
#include <Modloader/app/structs/IPoolableTimelineEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPoolableTimelineEntity__Array {
        inline app::IPoolableTimelineEntity__Array__Class** type_info() {
            static app::IPoolableTimelineEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPoolableTimelineEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPoolableTimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::IPoolableTimelineEntity__Array__Class>(type_info(), "Moon.Timeline", "IPoolableTimelineEntity[]");
        }
        inline app::IPoolableTimelineEntity__Array* create() {
            return il2cpp::create_object<app::IPoolableTimelineEntity__Array>(get_class());
        }
    } // namespace IPoolableTimelineEntity__Array
} // namespace app::classes::types
