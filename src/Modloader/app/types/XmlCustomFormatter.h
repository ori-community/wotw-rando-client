#pragma once
#include <Modloader/app/structs/XmlCustomFormatter.h>
#include <Modloader/app/structs/XmlCustomFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlCustomFormatter {
        inline app::XmlCustomFormatter__Class** type_info() {
            static app::XmlCustomFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlCustomFormatter__Class**)(modloader::win::memory::resolve_rva(0x0475F888));
            }
            return cache;
        }
        inline app::XmlCustomFormatter__Class* get_class() {
            return il2cpp::get_class<app::XmlCustomFormatter__Class>(type_info(), "System.Xml.Serialization", "XmlCustomFormatter");
        }
        inline app::XmlCustomFormatter* create() {
            return il2cpp::create_object<app::XmlCustomFormatter>(get_class());
        }
    } // namespace XmlCustomFormatter
} // namespace app::classes::types
