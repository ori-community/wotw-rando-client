#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SchemaDeclBase__Class.h>
#include <Modloader/app/structs/SchemaDeclBase.h>

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
