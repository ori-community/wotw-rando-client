#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdBuilder {
        inline app::XsdBuilder__Class** type_info = (app::XsdBuilder__Class**)(modloader::win::memory::resolve_rva(0x04761E78));
        inline app::XsdBuilder__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder__Class>(type_info, "System.Xml.Schema", "XsdBuilder");
        }
        inline app::XsdBuilder* create() {
            return il2cpp::create_object<app::XsdBuilder>(get_class());
        }
    } // namespace XsdBuilder
} // namespace app::classes::types
