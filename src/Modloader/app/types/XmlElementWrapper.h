#pragma once
#include <Modloader/app/structs/XmlElementWrapper.h>
#include <Modloader/app/structs/XmlElementWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlElementWrapper {
        inline app::XmlElementWrapper__Class** type_info() {
            static app::XmlElementWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x047687D8));
            }
            return cache;
        }
        inline app::XmlElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlElementWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XmlElementWrapper");
        }
        inline app::XmlElementWrapper* create() {
            return il2cpp::create_object<app::XmlElementWrapper>(get_class());
        }
    } // namespace XmlElementWrapper
} // namespace app::classes::types
