#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StorageType__Enum__Class.h>
#include <Modloader/app/structs/StorageType__Enum.h>

namespace app::classes::types {
    namespace StorageType__Enum {
        namespace {
            inline app::StorageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StorageType__Enum__Class** type_info = &type_info_ref;
        inline app::StorageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::StorageType__Enum__Class>(type_info, "System.Data.Common", "StorageType");
        }
        inline app::StorageType__Enum* create() {
            return il2cpp::create_object<app::StorageType__Enum>(get_class());
        }
    } // namespace StorageType__Enum
} // namespace app::classes::types
