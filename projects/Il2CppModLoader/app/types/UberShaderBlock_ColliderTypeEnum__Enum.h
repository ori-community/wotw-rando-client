#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlock_ColliderTypeEnum__Enum {
        namespace {
            app::UberShaderBlock_ColliderTypeEnum__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderBlock_ColliderTypeEnum__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderBlock_ColliderTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderBlock_ColliderTypeEnum__Enum__Class>(type_info, "", "UberShaderBlock", "ColliderTypeEnum");
        }
        inline app::UberShaderBlock_ColliderTypeEnum__Enum* create() {
            return il2cpp::create_object<app::UberShaderBlock_ColliderTypeEnum__Enum>(get_class());
        }
    } // namespace UberShaderBlock_ColliderTypeEnum__Enum
} // namespace app::classes::types
