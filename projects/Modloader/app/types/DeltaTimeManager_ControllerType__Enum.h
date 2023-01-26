#pragma once
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum__Array.h>
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager_ControllerType__Enum {
        inline app::DeltaTimeManager_ControllerType__Enum__Class** type_info() {
            static app::DeltaTimeManager_ControllerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeltaTimeManager_ControllerType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeltaTimeManager_ControllerType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeltaTimeManager_ControllerType__Enum__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager", "ControllerType");
        }
        inline app::DeltaTimeManager_ControllerType__Enum* create() {
            return il2cpp::create_object<app::DeltaTimeManager_ControllerType__Enum>(get_class());
        }
        inline app::DeltaTimeManager_ControllerType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DeltaTimeManager_ControllerType__Enum__Array>(get_class(), size);
        }
        inline app::DeltaTimeManager_ControllerType__Enum__Array* create_array(const std::vector<app::DeltaTimeManager_ControllerType__Enum*>& items) {
            return il2cpp::array_new<app::DeltaTimeManager_ControllerType__Enum__Array>(get_class(), items);
        }
    } // namespace DeltaTimeManager_ControllerType__Enum
} // namespace app::classes::types
