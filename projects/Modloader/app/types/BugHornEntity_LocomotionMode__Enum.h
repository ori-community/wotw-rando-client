#pragma once
#include <Modloader/app/structs/BugHornEntity_LocomotionMode__Enum.h>
#include <Modloader/app/structs/BugHornEntity_LocomotionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity_LocomotionMode__Enum {
        inline app::BugHornEntity_LocomotionMode__Enum__Class** type_info() {
            static app::BugHornEntity_LocomotionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugHornEntity_LocomotionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugHornEntity_LocomotionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_LocomotionMode__Enum__Class>(type_info(), "", "BugHornEntity", "LocomotionMode");
        }
        inline app::BugHornEntity_LocomotionMode__Enum* create() {
            return il2cpp::create_object<app::BugHornEntity_LocomotionMode__Enum>(get_class());
        }
    } // namespace BugHornEntity_LocomotionMode__Enum
} // namespace app::classes::types
