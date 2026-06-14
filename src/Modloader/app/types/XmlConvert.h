#pragma once
#include <Modloader/app/structs/XmlConvert.h>
#include <Modloader/app/structs/XmlConvert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlConvert {
        inline app::XmlConvert__Class** type_info() {
            static app::XmlConvert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlConvert__Class**)(modloader::win::memory::resolve_rva(0x04740AE0));
            }
            return cache;
        }
        inline app::XmlConvert__Class* get_class() {
            return il2cpp::get_class<app::XmlConvert__Class>(type_info(), "System.Xml", "XmlConvert");
        }
        inline app::XmlConvert* create() {
            return il2cpp::create_object<app::XmlConvert>(get_class());
        }
    } // namespace XmlConvert
} // namespace app::classes::types
