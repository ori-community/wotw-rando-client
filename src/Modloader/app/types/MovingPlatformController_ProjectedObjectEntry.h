#pragma once
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry.h>
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry__Array.h>
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformController_ProjectedObjectEntry {
        inline app::MovingPlatformController_ProjectedObjectEntry__Class** type_info() {
            static app::MovingPlatformController_ProjectedObjectEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingPlatformController_ProjectedObjectEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MovingPlatformController_ProjectedObjectEntry__Class>(type_info(), "", "MovingPlatformController", "ProjectedObjectEntry");
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
