#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovingPlatformController_ProjectedObjectEntry {
        namespace {
            inline app::MovingPlatformController_ProjectedObjectEntry__Class* type_info_ref = nullptr;
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Class** type_info = &type_info_ref;
        inline app::MovingPlatformController_ProjectedObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MovingPlatformController_ProjectedObjectEntry__Class>(type_info, "", "MovingPlatformController", "ProjectedObjectEntry");
        }
        inline app::MovingPlatformController_ProjectedObjectEntry* create() {
            return il2cpp::create_object<app::MovingPlatformController_ProjectedObjectEntry>(get_class());
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MovingPlatformController_ProjectedObjectEntry__Array>(get_class(), size);
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Array* create_array(const std::vector<app::MovingPlatformController_ProjectedObjectEntry*>& items) {
            return il2cpp::array_new<app::MovingPlatformController_ProjectedObjectEntry__Array>(get_class(), items);
        }
    } // namespace MovingPlatformController_ProjectedObjectEntry
} // namespace app::classes::types
