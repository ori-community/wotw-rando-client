#pragma once
#include <Modloader/app/structs/XmlNodeChangedEventArgs.h>
#include <Modloader/app/structs/XmlNodeChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedEventArgs {
        inline app::XmlNodeChangedEventArgs__Class** type_info() {
            static app::XmlNodeChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047166F0));
            }
            return cache;
        }
        inline app::XmlNodeChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedEventArgs__Class>(type_info(), "System.Xml", "XmlNodeChangedEventArgs");
        }
        inline app::XmlNodeChangedEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeChangedEventArgs>(get_class());
        }
    } // namespace XmlNodeChangedEventArgs
} // namespace app::classes::types
