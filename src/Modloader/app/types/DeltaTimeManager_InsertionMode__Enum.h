#pragma once
#include <Modloader/app/structs/DeltaTimeManager_InsertionMode__Enum.h>
#include <Modloader/app/structs/DeltaTimeManager_InsertionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager_InsertionMode__Enum {
        inline app::DeltaTimeManager_InsertionMode__Enum__Class** type_info() {
            static app::DeltaTimeManager_InsertionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeltaTimeManager_InsertionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeltaTimeManager_InsertionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeltaTimeManager_InsertionMode__Enum__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager", "InsertionMode");
        }
        inline app::DeltaTimeManager_InsertionMode__Enum* create() {
            return il2cpp::create_object<app::DeltaTimeManager_InsertionMode__Enum>(get_class());
        }
    } // namespace DeltaTimeManager_InsertionMode__Enum
} // namespace app::classes::types
