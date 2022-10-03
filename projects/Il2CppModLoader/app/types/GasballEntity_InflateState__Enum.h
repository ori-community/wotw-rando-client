#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballEntity_InflateState__Enum {
        namespace {
            app::GasballEntity_InflateState__Enum__Class* type_info_ref = nullptr;
        }
        app::GasballEntity_InflateState__Enum__Class** type_info = &type_info_ref;
        inline app::GasballEntity_InflateState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GasballEntity_InflateState__Enum__Class>(type_info, "", "GasballEntity", "InflateState");
        }
        inline app::GasballEntity_InflateState__Enum* create() {
            return il2cpp::create_object<app::GasballEntity_InflateState__Enum>(get_class());
        }
    } // namespace GasballEntity_InflateState__Enum
} // namespace app::classes::types
