#pragma once
#include <Modloader/app/structs/Environment_SpecialFolderOption__Enum.h>
#include <Modloader/app/structs/Environment_SpecialFolderOption__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Environment_SpecialFolderOption__Enum {
        inline app::Environment_SpecialFolderOption__Enum__Class** type_info() {
            static app::Environment_SpecialFolderOption__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Environment_SpecialFolderOption__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Environment_SpecialFolderOption__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Environment_SpecialFolderOption__Enum__Class>(type_info(), "System", "Environment", "SpecialFolderOption");
        }
        inline app::Environment_SpecialFolderOption__Enum* create() {
            return il2cpp::create_object<app::Environment_SpecialFolderOption__Enum>(get_class());
        }
    } // namespace Environment_SpecialFolderOption__Enum
} // namespace app::classes::types
