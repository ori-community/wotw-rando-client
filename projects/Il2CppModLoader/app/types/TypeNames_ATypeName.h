#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeNames_ATypeName {
        namespace {
            app::TypeNames_ATypeName__Class* type_info_ref = nullptr;
        }
        app::TypeNames_ATypeName__Class** type_info = &type_info_ref;
        inline app::TypeNames_ATypeName__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeNames_ATypeName__Class>(type_info, "System", "TypeNames", "ATypeName");
        }
        inline app::TypeNames_ATypeName* create() {
            return il2cpp::create_object<app::TypeNames_ATypeName>(get_class());
        }
    } // namespace TypeNames_ATypeName
} // namespace app::classes::types
