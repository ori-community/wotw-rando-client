#pragma once
#include <Modloader/app/structs/GCCollectionMode__Enum.h>
#include <Modloader/app/structs/GCCollectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GCCollectionMode__Enum {
        inline app::GCCollectionMode__Enum__Class** type_info() {
            static app::GCCollectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GCCollectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GCCollectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GCCollectionMode__Enum__Class>(type_info(), "System", "GCCollectionMode");
        }
        inline app::GCCollectionMode__Enum* create() {
            return il2cpp::create_object<app::GCCollectionMode__Enum>(get_class());
        }
    } // namespace GCCollectionMode__Enum
} // namespace app::classes::types
