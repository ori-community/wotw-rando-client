#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyTitleAttribute {
        namespace {
            inline app::AssemblyTitleAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyTitleAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyTitleAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyTitleAttribute__Class>(type_info, "System.Reflection", "AssemblyTitleAttribute");
        }
        inline app::AssemblyTitleAttribute* create() {
            return il2cpp::create_object<app::AssemblyTitleAttribute>(get_class());
        }
    } // namespace AssemblyTitleAttribute
} // namespace app::classes::types
