#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyContentType__Enum {
        namespace {
            inline app::AssemblyContentType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyContentType__Enum__Class** type_info = &type_info_ref;
        inline app::AssemblyContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyContentType__Enum__Class>(type_info, "System.Reflection", "AssemblyContentType");
        }
        inline app::AssemblyContentType__Enum* create() {
            return il2cpp::create_object<app::AssemblyContentType__Enum>(get_class());
        }
    } // namespace AssemblyContentType__Enum
} // namespace app::classes::types
