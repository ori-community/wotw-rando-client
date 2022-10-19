#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdBuildFunction {
        inline app::XsdBuilder_XsdBuildFunction__Class** type_info = (app::XsdBuilder_XsdBuildFunction__Class**)(modloader::win::memory::resolve_rva(0x0471AA40));
        inline app::XsdBuilder_XsdBuildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_XsdBuildFunction__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "XsdBuildFunction");
        }
        inline app::XsdBuilder_XsdBuildFunction* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdBuildFunction>(get_class());
        }
    } // namespace XsdBuilder_XsdBuildFunction
} // namespace app::classes::types
