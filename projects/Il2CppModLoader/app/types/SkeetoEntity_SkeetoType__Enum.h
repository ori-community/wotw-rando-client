#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity_SkeetoType__Enum {
        namespace {
            app::SkeetoEntity_SkeetoType__Enum__Class* type_info_ref = nullptr;
        }
        app::SkeetoEntity_SkeetoType__Enum__Class** type_info = &type_info_ref;
        inline app::SkeetoEntity_SkeetoType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoEntity_SkeetoType__Enum__Class>(type_info, "", "SkeetoEntity", "SkeetoType");
        }
        inline app::SkeetoEntity_SkeetoType__Enum* create() {
            return il2cpp::create_object<app::SkeetoEntity_SkeetoType__Enum>(get_class());
        }
    } // namespace SkeetoEntity_SkeetoType__Enum
} // namespace app::classes::types
