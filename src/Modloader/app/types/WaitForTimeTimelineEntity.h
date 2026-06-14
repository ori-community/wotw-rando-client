#pragma once
#include <Modloader/app/structs/WaitForTimeTimelineEntity.h>
#include <Modloader/app/structs/WaitForTimeTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForTimeTimelineEntity {
        inline app::WaitForTimeTimelineEntity__Class** type_info() {
            static app::WaitForTimeTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForTimeTimelineEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForTimeTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForTimeTimelineEntity__Class>(type_info(), "Moon.Timeline", "WaitForTimeTimelineEntity");
        }
        inline app::WaitForTimeTimelineEntity* create() {
            return il2cpp::create_object<app::WaitForTimeTimelineEntity>(get_class());
        }
    } // namespace WaitForTimeTimelineEntity
} // namespace app::classes::types
