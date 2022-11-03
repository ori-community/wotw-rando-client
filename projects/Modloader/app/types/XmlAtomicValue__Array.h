#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAtomicValue__Array {
        inline app::XmlAtomicValue__Array__Class** type_info = (app::XmlAtomicValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04776018));
        inline app::XmlAtomicValue__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlAtomicValue__Array__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue[]");
        }
        inline app::XmlAtomicValue__Array* create() {
            return il2cpp::create_object<app::XmlAtomicValue__Array>(get_class());
        }
    } // namespace XmlAtomicValue__Array
} // namespace app::classes::types
