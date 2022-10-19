#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElement__Array {
        inline app::XElement__Array__Class** type_info = (app::XElement__Array__Class**)(modloader::win::memory::resolve_rva(0x047880A8));
        inline app::XElement__Array__Class* get_class() {
            return il2cpp::get_class<app::XElement__Array__Class>(type_info, "System.Xml.Linq", "XElement[]");
        }
        inline app::XElement__Array* create() {
            return il2cpp::create_object<app::XElement__Array>(get_class());
        }
    } // namespace XElement__Array
} // namespace app::classes::types
