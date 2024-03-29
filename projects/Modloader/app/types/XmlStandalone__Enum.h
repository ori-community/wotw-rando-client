#pragma once
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#include <Modloader/app/structs/XmlStandalone__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlStandalone__Enum {
        inline app::XmlStandalone__Enum__Class** type_info() {
            static app::XmlStandalone__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlStandalone__Enum__Class**)(modloader::win::memory::resolve_rva(0x04770380));
            }
            return cache;
        }
        inline app::XmlStandalone__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlStandalone__Enum__Class>(type_info(), "System.Xml", "XmlStandalone");
        }
        inline app::XmlStandalone__Enum* create() {
            return il2cpp::create_object<app::XmlStandalone__Enum>(get_class());
        }
    } // namespace XmlStandalone__Enum
} // namespace app::classes::types
