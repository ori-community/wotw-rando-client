#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaCollectionPreprocessor_Compositor__Enum {
        namespace {
            app::SchemaCollectionPreprocessor_Compositor__Enum__Class* type_info_ref = nullptr;
        }
        app::SchemaCollectionPreprocessor_Compositor__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaCollectionPreprocessor_Compositor__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaCollectionPreprocessor_Compositor__Enum__Class>(type_info, "System.Xml.Schema", "SchemaCollectionPreprocessor", "Compositor");
        }
        inline app::SchemaCollectionPreprocessor_Compositor__Enum* create() {
            return il2cpp::create_object<app::SchemaCollectionPreprocessor_Compositor__Enum>(get_class());
        }
    } // namespace SchemaCollectionPreprocessor_Compositor__Enum
} // namespace app::classes::types
