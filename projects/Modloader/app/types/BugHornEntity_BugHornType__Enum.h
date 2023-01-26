#pragma once
#include <Modloader/app/structs/BugHornEntity_BugHornType__Enum.h>
#include <Modloader/app/structs/BugHornEntity_BugHornType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity_BugHornType__Enum {
        inline app::BugHornEntity_BugHornType__Enum__Class** type_info() {
            static app::BugHornEntity_BugHornType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugHornEntity_BugHornType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugHornEntity_BugHornType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_BugHornType__Enum__Class>(type_info(), "", "BugHornEntity", "BugHornType");
        }
        inline app::BugHornEntity_BugHornType__Enum* create() {
            return il2cpp::create_object<app::BugHornEntity_BugHornType__Enum>(get_class());
        }
    } // namespace BugHornEntity_BugHornType__Enum
} // namespace app::classes::types
