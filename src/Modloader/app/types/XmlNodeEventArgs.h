#pragma once
#include <Modloader/app/structs/XmlNodeEventArgs.h>
#include <Modloader/app/structs/XmlNodeEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeEventArgs {
        inline app::XmlNodeEventArgs__Class** type_info() {
            static app::XmlNodeEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04792F48));
            }
            return cache;
        }
        inline app::XmlNodeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeEventArgs__Class>(type_info(), "System.Xml.Serialization", "XmlNodeEventArgs");
        }
        inline app::XmlNodeEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeEventArgs>(get_class());
        }
    } // namespace XmlNodeEventArgs
} // namespace app::classes::types
