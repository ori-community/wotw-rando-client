#pragma once
#include <Modloader/app/structs/EnvironmentVariableTarget__Enum.h>
#include <Modloader/app/structs/EnvironmentVariableTarget__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentVariableTarget__Enum {
        inline app::EnvironmentVariableTarget__Enum__Class** type_info() {
            static app::EnvironmentVariableTarget__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentVariableTarget__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentVariableTarget__Enum__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentVariableTarget__Enum__Class>(type_info(), "System", "EnvironmentVariableTarget");
        }
        inline app::EnvironmentVariableTarget__Enum* create() {
            return il2cpp::create_object<app::EnvironmentVariableTarget__Enum>(get_class());
        }
    } // namespace EnvironmentVariableTarget__Enum
} // namespace app::classes::types
