#pragma once
#include <Modloader/app/structs/XmlAtomicValue.h>
#include <Modloader/app/structs/XmlAtomicValue__Array.h>
#include <Modloader/app/structs/XmlAtomicValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue {
        inline app::XmlAtomicValue__Class** type_info() {
            static app::XmlAtomicValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAtomicValue__Class**)(modloader::win::memory::resolve_rva(0x0477E0B0));
            }
            return cache;
        }
        inline app::XmlAtomicValue__Class* get_class() {
            return il2cpp::get_class<app::XmlAtomicValue__Class>(type_info(), "System.Xml.Schema", "XmlAtomicValue");
        }
        inline app::XmlAtomicValue* create() {
            return il2cpp::create_object<app::XmlAtomicValue>(get_class());
        }
        inline app::XmlAtomicValue__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlAtomicValue__Array>(get_class(), size);
        }
        inline app::XmlAtomicValue__Array* create_array(const std::vector<app::XmlAtomicValue*>& items) {
            return il2cpp::array_new<app::XmlAtomicValue__Array>(get_class(), items);
        }
    } // namespace XmlAtomicValue
} // namespace app::classes::types
