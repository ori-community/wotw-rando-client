#pragma once
#include <Modloader/app/structs/XmlAtomicValue__Array.h>
#include <Modloader/app/structs/XmlAtomicValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue__Array {
        inline app::XmlAtomicValue__Array__Class** type_info() {
            static app::XmlAtomicValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAtomicValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04776018));
            }
            return cache;
        }
        inline app::XmlAtomicValue__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlAtomicValue__Array__Class>(type_info(), "System.Xml.Schema", "XmlAtomicValue[]");
        }
        inline app::XmlAtomicValue__Array* create() {
            return il2cpp::create_object<app::XmlAtomicValue__Array>(get_class());
        }
    } // namespace XmlAtomicValue__Array
} // namespace app::classes::types
