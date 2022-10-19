#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AxisElement {
        inline app::AxisElement__Class** type_info = (app::AxisElement__Class**)(modloader::win::memory::resolve_rva(0x04780718));
        inline app::AxisElement__Class* get_class() {
            return il2cpp::get_class<app::AxisElement__Class>(type_info, "System.Xml.Schema", "AxisElement");
        }
        inline app::AxisElement* create() {
            return il2cpp::create_object<app::AxisElement>(get_class());
        }
    } // namespace AxisElement
} // namespace app::classes::types
