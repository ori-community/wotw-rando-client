#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesiredStateTransitionInfo {
        inline app::DesiredStateTransitionInfo__Class** type_info = (app::DesiredStateTransitionInfo__Class**)(modloader::win::memory::resolve_rva(0x047248B8));
        inline app::DesiredStateTransitionInfo__Class* get_class() {
            return il2cpp::get_class<app::DesiredStateTransitionInfo__Class>(type_info, "Moon", "DesiredStateTransitionInfo");
        }
        inline app::DesiredStateTransitionInfo* create() {
            return il2cpp::create_object<app::DesiredStateTransitionInfo>(get_class());
        }
        inline app::DesiredStateTransitionInfo__Boxed* box(app::DesiredStateTransitionInfo value) {
            return il2cpp::box_value<app::DesiredStateTransitionInfo__Boxed>(get_class(), value);
        }
        inline app::DesiredStateTransitionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredStateTransitionInfo__Array>(get_class(), size);
        }
        inline app::DesiredStateTransitionInfo__Array* create_array(const std::vector<app::DesiredStateTransitionInfo>& items) {
            return il2cpp::array_new<app::DesiredStateTransitionInfo__Array>(get_class(), items);
        }
    } // namespace DesiredStateTransitionInfo
} // namespace app::classes::types
