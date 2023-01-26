#pragma once
#include <Modloader/app/structs/AssemblyDefaultAliasAttribute.h>
#include <Modloader/app/structs/AssemblyDefaultAliasAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyDefaultAliasAttribute {
        inline app::AssemblyDefaultAliasAttribute__Class** type_info() {
            static app::AssemblyDefaultAliasAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyDefaultAliasAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyDefaultAliasAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDefaultAliasAttribute__Class>(type_info(), "System.Reflection", "AssemblyDefaultAliasAttribute");
        }
        inline app::AssemblyDefaultAliasAttribute* create() {
            return il2cpp::create_object<app::AssemblyDefaultAliasAttribute>(get_class());
        }
    } // namespace AssemblyDefaultAliasAttribute
} // namespace app::classes::types
