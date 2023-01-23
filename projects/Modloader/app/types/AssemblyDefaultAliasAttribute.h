#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssemblyDefaultAliasAttribute__Class.h>
#include <Modloader/app/structs/AssemblyDefaultAliasAttribute.h>

namespace app::classes::types {
    namespace AssemblyDefaultAliasAttribute {
        namespace {
            inline app::AssemblyDefaultAliasAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyDefaultAliasAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyDefaultAliasAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDefaultAliasAttribute__Class>(type_info, "System.Reflection", "AssemblyDefaultAliasAttribute");
        }
        inline app::AssemblyDefaultAliasAttribute* create() {
            return il2cpp::create_object<app::AssemblyDefaultAliasAttribute>(get_class());
        }
    } // namespace AssemblyDefaultAliasAttribute
} // namespace app::classes::types
