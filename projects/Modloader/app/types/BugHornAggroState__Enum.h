#pragma once
#include <Modloader/app/structs/BugHornAggroState__Enum.h>
#include <Modloader/app/structs/BugHornAggroState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornAggroState__Enum {
        inline app::BugHornAggroState__Enum__Class** type_info() {
            static app::BugHornAggroState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugHornAggroState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugHornAggroState__Enum__Class* get_class() {
            return il2cpp::get_class<app::BugHornAggroState__Enum__Class>(type_info(), "", "BugHornAggroState");
        }
        inline app::BugHornAggroState__Enum* create() {
            return il2cpp::create_object<app::BugHornAggroState__Enum>(get_class());
        }
    } // namespace BugHornAggroState__Enum
} // namespace app::classes::types
