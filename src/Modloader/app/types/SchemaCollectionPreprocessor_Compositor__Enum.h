#pragma once
#include <Modloader/app/structs/SchemaCollectionPreprocessor_Compositor__Enum.h>
#include <Modloader/app/structs/SchemaCollectionPreprocessor_Compositor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaCollectionPreprocessor_Compositor__Enum {
        inline app::SchemaCollectionPreprocessor_Compositor__Enum__Class** type_info() {
            static app::SchemaCollectionPreprocessor_Compositor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaCollectionPreprocessor_Compositor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaCollectionPreprocessor_Compositor__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaCollectionPreprocessor_Compositor__Enum__Class>(type_info(), "System.Xml.Schema", "SchemaCollectionPreprocessor", "Compositor");
        }
        inline app::SchemaCollectionPreprocessor_Compositor__Enum* create() {
            return il2cpp::create_object<app::SchemaCollectionPreprocessor_Compositor__Enum>(get_class());
        }
    } // namespace SchemaCollectionPreprocessor_Compositor__Enum
} // namespace app::classes::types
