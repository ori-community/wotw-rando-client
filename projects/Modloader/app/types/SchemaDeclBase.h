#pragma once
#include <Modloader/app/structs/SchemaDeclBase.h>
#include <Modloader/app/structs/SchemaDeclBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaDeclBase {
        inline app::SchemaDeclBase__Class** type_info() {
            static app::SchemaDeclBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaDeclBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaDeclBase__Class* get_class() {
            return il2cpp::get_class<app::SchemaDeclBase__Class>(type_info(), "System.Xml.Schema", "SchemaDeclBase");
        }
        inline app::SchemaDeclBase* create() {
            return il2cpp::create_object<app::SchemaDeclBase>(get_class());
        }
    } // namespace SchemaDeclBase
} // namespace app::classes::types
