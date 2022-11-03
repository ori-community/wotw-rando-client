#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitTimelineEntity {
        namespace {
            inline app::WaitTimelineEntity__Class* type_info_ref = nullptr;
        }
        inline app::WaitTimelineEntity__Class** type_info = &type_info_ref;
        inline app::WaitTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitTimelineEntity__Class>(type_info, "Moon.Timeline", "WaitTimelineEntity");
        }
        inline app::WaitTimelineEntity* create() {
            return il2cpp::create_object<app::WaitTimelineEntity>(get_class());
        }
    } // namespace WaitTimelineEntity
} // namespace app::classes::types
