#pragma once
#include <Modloader/app/structs/ObjectStorage_Families__Enum.h>
#include <Modloader/app/structs/ObjectStorage_Families__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectStorage_Families__Enum {
        inline app::ObjectStorage_Families__Enum__Class** type_info() {
            static app::ObjectStorage_Families__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectStorage_Families__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectStorage_Families__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectStorage_Families__Enum__Class>(type_info(), "System.Data.Common", "ObjectStorage", "Families");
        }
        inline app::ObjectStorage_Families__Enum* create() {
            return il2cpp::create_object<app::ObjectStorage_Families__Enum>(get_class());
        }
    } // namespace ObjectStorage_Families__Enum
} // namespace app::classes::types
