#pragma once
#include <Modloader/app/structs/XmlElementEventArgs.h>
#include <Modloader/app/structs/XmlElementEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlElementEventArgs {
        inline app::XmlElementEventArgs__Class** type_info() {
            static app::XmlElementEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlElementEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04765740));
            }
            return cache;
        }
        inline app::XmlElementEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventArgs__Class>(type_info(), "System.Xml.Serialization", "XmlElementEventArgs");
        }
        inline app::XmlElementEventArgs* create() {
            return il2cpp::create_object<app::XmlElementEventArgs>(get_class());
        }
    } // namespace XmlElementEventArgs
} // namespace app::classes::types
