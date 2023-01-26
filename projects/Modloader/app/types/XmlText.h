#pragma once
#include <Modloader/app/structs/XmlText.h>
#include <Modloader/app/structs/XmlText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlText {
        inline app::XmlText__Class** type_info() {
            static app::XmlText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlText__Class**)(modloader::win::memory::resolve_rva(0x0473B100));
            }
            return cache;
        }
        inline app::XmlText__Class* get_class() {
            return il2cpp::get_class<app::XmlText__Class>(type_info(), "System.Xml", "XmlText");
        }
        inline app::XmlText* create() {
            return il2cpp::create_object<app::XmlText>(get_class());
        }
    } // namespace XmlText
} // namespace app::classes::types
