#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoCustomAttrs_AttributeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoCustomAttrs_AttributeInfo__Class** type_info;
        inline app::MonoCustomAttrs_AttributeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoCustomAttrs_AttributeInfo__Class>(type_info, "System", "MonoCustomAttrs", "AttributeInfo");
        }
        inline app::MonoCustomAttrs_AttributeInfo* create() {
            return il2cpp::create_object<app::MonoCustomAttrs_AttributeInfo>(get_class());
        }
        inline app::MonoCustomAttrs_AttributeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoCustomAttrs_AttributeInfo__Array>(get_class(), size);
        }
    } // namespace MonoCustomAttrs_AttributeInfo
} // namespace app::classes::types
