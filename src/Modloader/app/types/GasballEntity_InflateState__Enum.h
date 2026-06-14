#pragma once
#include <Modloader/app/structs/GasballEntity_InflateState__Enum.h>
#include <Modloader/app/structs/GasballEntity_InflateState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballEntity_InflateState__Enum {
        inline app::GasballEntity_InflateState__Enum__Class** type_info() {
            static app::GasballEntity_InflateState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballEntity_InflateState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballEntity_InflateState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GasballEntity_InflateState__Enum__Class>(type_info(), "", "GasballEntity", "InflateState");
        }
        inline app::GasballEntity_InflateState__Enum* create() {
            return il2cpp::create_object<app::GasballEntity_InflateState__Enum>(get_class());
        }
    } // namespace GasballEntity_InflateState__Enum
} // namespace app::classes::types
