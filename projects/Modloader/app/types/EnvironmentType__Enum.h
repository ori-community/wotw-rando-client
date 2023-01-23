#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentType__Enum__Class.h>
#include <Modloader/app/structs/EnvironmentType__Enum.h>

namespace app::classes::types {
    namespace EnvironmentType__Enum {
        namespace {
            inline app::EnvironmentType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentType__Enum__Class** type_info = &type_info_ref;
        inline app::EnvironmentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentType__Enum__Class>(type_info, "", "EnvironmentType");
        }
        inline app::EnvironmentType__Enum* create() {
            return il2cpp::create_object<app::EnvironmentType__Enum>(get_class());
        }
    } // namespace EnvironmentType__Enum
} // namespace app::classes::types
