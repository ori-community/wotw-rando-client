#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaDeclBase {
        namespace {
            inline app::SchemaDeclBase__Class* type_info_ref = nullptr;
        }
        inline app::SchemaDeclBase__Class** type_info = &type_info_ref;
        inline app::SchemaDeclBase__Class* get_class() {
            return il2cpp::get_class<app::SchemaDeclBase__Class>(type_info, "System.Xml.Schema", "SchemaDeclBase");
        }
        inline app::SchemaDeclBase* create() {
            return il2cpp::create_object<app::SchemaDeclBase>(get_class());
        }
    } // namespace SchemaDeclBase
} // namespace app::classes::types
