#pragma once
#include <Modloader/app/structs/SchemaCollectionPreprocessor.h>
#include <Modloader/app/structs/SchemaCollectionPreprocessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaCollectionPreprocessor {
        inline app::SchemaCollectionPreprocessor__Class** type_info() {
            static app::SchemaCollectionPreprocessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaCollectionPreprocessor__Class**)(modloader::win::memory::resolve_rva(0x0477B308));
            }
            return cache;
        }
        inline app::SchemaCollectionPreprocessor__Class* get_class() {
            return il2cpp::get_class<app::SchemaCollectionPreprocessor__Class>(type_info(), "System.Xml.Schema", "SchemaCollectionPreprocessor");
        }
        inline app::SchemaCollectionPreprocessor* create() {
            return il2cpp::create_object<app::SchemaCollectionPreprocessor>(get_class());
        }
    } // namespace SchemaCollectionPreprocessor
} // namespace app::classes::types
