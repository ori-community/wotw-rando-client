#pragma once
#include <Modloader/app/structs/BondDataType__Enum.h>
#include <Modloader/app/structs/BondDataType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BondDataType__Enum {
        inline app::BondDataType__Enum__Class** type_info() {
            static app::BondDataType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BondDataType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BondDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BondDataType__Enum__Class>(type_info(), "Microsoft.Applications.Events", "BondDataType");
        }
        inline app::BondDataType__Enum* create() {
            return il2cpp::create_object<app::BondDataType__Enum>(get_class());
        }
    } // namespace BondDataType__Enum
} // namespace app::classes::types
