#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaCollectionPreprocessor {
        inline app::SchemaCollectionPreprocessor__Class** type_info = (app::SchemaCollectionPreprocessor__Class**)(modloader::win::memory::resolve_rva(0x0477B308));
        inline app::SchemaCollectionPreprocessor__Class* get_class() {
            return il2cpp::get_class<app::SchemaCollectionPreprocessor__Class>(type_info, "System.Xml.Schema", "SchemaCollectionPreprocessor");
        }
        inline app::SchemaCollectionPreprocessor* create() {
            return il2cpp::create_object<app::SchemaCollectionPreprocessor>(get_class());
        }
    } // namespace SchemaCollectionPreprocessor
} // namespace app::classes::types
