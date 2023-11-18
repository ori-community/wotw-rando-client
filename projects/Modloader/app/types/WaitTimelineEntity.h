#pragma once
#include <Modloader/app/structs/WaitTimelineEntity.h>
#include <Modloader/app/structs/WaitTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitTimelineEntity {
        inline app::WaitTimelineEntity__Class** type_info() {
            static app::WaitTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitTimelineEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitTimelineEntity__Class>(type_info(), "Moon.Timeline", "WaitTimelineEntity");
        }
        inline app::WaitTimelineEntity* create() {
            return il2cpp::create_object<app::WaitTimelineEntity>(get_class());
        }
    } // namespace WaitTimelineEntity
} // namespace app::classes::types
