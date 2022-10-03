#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineCompleted {
        namespace {
            app::MasterTimelineCompleted__Class* type_info_ref = nullptr;
        }
        app::MasterTimelineCompleted__Class** type_info = &type_info_ref;
        inline app::MasterTimelineCompleted__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineCompleted__Class>(type_info, "", "MasterTimelineCompleted");
        }
        inline app::MasterTimelineCompleted* create() {
            return il2cpp::create_object<app::MasterTimelineCompleted>(get_class());
        }
    } // namespace MasterTimelineCompleted
} // namespace app::classes::types
