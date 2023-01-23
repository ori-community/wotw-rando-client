#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssemblyProductAttribute__Class.h>
#include <Modloader/app/structs/AssemblyProductAttribute.h>

namespace app::classes::types {
    namespace AssemblyProductAttribute {
        namespace {
            inline app::AssemblyProductAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyProductAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyProductAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyProductAttribute__Class>(type_info, "System.Reflection", "AssemblyProductAttribute");
        }
        inline app::AssemblyProductAttribute* create() {
            return il2cpp::create_object<app::AssemblyProductAttribute>(get_class());
        }
    } // namespace AssemblyProductAttribute
} // namespace app::classes::types
