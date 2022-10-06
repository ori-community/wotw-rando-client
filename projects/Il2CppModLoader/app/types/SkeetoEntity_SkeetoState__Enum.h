#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity_SkeetoState__Enum {
        namespace {
            app::SkeetoEntity_SkeetoState__Enum__Class* type_info_ref = nullptr;
        }
        app::SkeetoEntity_SkeetoState__Enum__Class** type_info = &type_info_ref;
        inline app::SkeetoEntity_SkeetoState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoEntity_SkeetoState__Enum__Class>(type_info, "", "SkeetoEntity", "SkeetoState");
        }
        inline app::SkeetoEntity_SkeetoState__Enum* create() {
            return il2cpp::create_object<app::SkeetoEntity_SkeetoState__Enum>(get_class());
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SkeetoEntity_SkeetoState__Enum__Array>(get_class(), size);
        }
        inline app::SkeetoEntity_SkeetoState__Enum__Array* create_array(const std::vector<app::SkeetoEntity_SkeetoState__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::SkeetoEntity_SkeetoState__Enum__Array>(get_class(), items);
        }
    } // namespace SkeetoEntity_SkeetoState__Enum
} // namespace app::classes::types
