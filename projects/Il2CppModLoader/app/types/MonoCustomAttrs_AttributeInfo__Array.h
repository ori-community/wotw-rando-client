#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoCustomAttrs_AttributeInfo__Array {
        namespace {
            inline app::MonoCustomAttrs_AttributeInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::MonoCustomAttrs_AttributeInfo__Array__Class** type_info = &type_info_ref;
        inline app::MonoCustomAttrs_AttributeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoCustomAttrs_AttributeInfo__Array__Class>(type_info, "System", "MonoCustomAttrs+AttributeInfo[]");
        }
        inline app::MonoCustomAttrs_AttributeInfo__Array* create() {
            return il2cpp::create_object<app::MonoCustomAttrs_AttributeInfo__Array>(get_class());
        }
    } // namespace MonoCustomAttrs_AttributeInfo__Array
} // namespace app::classes::types
