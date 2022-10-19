#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Filter {
        inline app::Filter__Class** type_info = (app::Filter__Class**)(modloader::win::memory::resolve_rva(0x04751248));
        inline app::Filter__Class* get_class() {
            return il2cpp::get_class<app::Filter__Class>(type_info, "MS.Internal.Xml.XPath", "Filter");
        }
        inline app::Filter* create() {
            return il2cpp::create_object<app::Filter>(get_class());
        }
    } // namespace Filter
} // namespace app::classes::types
