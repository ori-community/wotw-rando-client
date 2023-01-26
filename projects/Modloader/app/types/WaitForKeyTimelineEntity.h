#pragma once
#include <Modloader/app/structs/WaitForKeyTimelineEntity.h>
#include <Modloader/app/structs/WaitForKeyTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForKeyTimelineEntity {
        inline app::WaitForKeyTimelineEntity__Class** type_info() {
            static app::WaitForKeyTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForKeyTimelineEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForKeyTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForKeyTimelineEntity__Class>(type_info(), "Moon.Timeline", "WaitForKeyTimelineEntity");
        }
        inline app::WaitForKeyTimelineEntity* create() {
            return il2cpp::create_object<app::WaitForKeyTimelineEntity>(get_class());
        }
    } // namespace WaitForKeyTimelineEntity
} // namespace app::classes::types
