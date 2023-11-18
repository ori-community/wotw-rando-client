#pragma once
#include <Modloader/app/structs/AkGroupType__Enum.h>
#include <Modloader/app/structs/AkGroupType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkGroupType__Enum {
        inline app::AkGroupType__Enum__Class** type_info() {
            static app::AkGroupType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkGroupType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkGroupType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGroupType__Enum__Class>(type_info(), "", "AkGroupType");
        }
        inline app::AkGroupType__Enum* create() {
            return il2cpp::create_object<app::AkGroupType__Enum>(get_class());
        }
    } // namespace AkGroupType__Enum
} // namespace app::classes::types
