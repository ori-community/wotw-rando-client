#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_AttributeTypeAndValue {
        namespace {
            inline app::X520_AttributeTypeAndValue__Class* type_info_ref = nullptr;
        }
        inline app::X520_AttributeTypeAndValue__Class** type_info = &type_info_ref;
        inline app::X520_AttributeTypeAndValue__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_AttributeTypeAndValue__Class>(type_info, "Mono.Security.X509", "X520", "AttributeTypeAndValue");
        }
        inline app::X520_AttributeTypeAndValue* create() {
            return il2cpp::create_object<app::X520_AttributeTypeAndValue>(get_class());
        }
    } // namespace X520_AttributeTypeAndValue
} // namespace app::classes::types
