#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MasterTimelineCompleted__Class.h>
#include <Modloader/app/structs/MasterTimelineCompleted.h>

namespace app::classes::types {
    namespace MasterTimelineCompleted {
        namespace {
            inline app::MasterTimelineCompleted__Class* type_info_ref = nullptr;
        }
        inline app::MasterTimelineCompleted__Class** type_info = &type_info_ref;
        inline app::MasterTimelineCompleted__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineCompleted__Class>(type_info, "", "MasterTimelineCompleted");
        }
        inline app::MasterTimelineCompleted* create() {
            return il2cpp::create_object<app::MasterTimelineCompleted>(get_class());
        }
    } // namespace MasterTimelineCompleted
} // namespace app::classes::types
