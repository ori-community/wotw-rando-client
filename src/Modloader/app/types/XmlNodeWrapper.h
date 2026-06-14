#pragma once
#include <Modloader/app/structs/XmlNodeWrapper.h>
#include <Modloader/app/structs/XmlNodeWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeWrapper {
        inline app::XmlNodeWrapper__Class** type_info() {
            static app::XmlNodeWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeWrapper__Class**)(modloader::win::memory::resolve_rva(0x04769DE0));
            }
            return cache;
        }
        inline app::XmlNodeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XmlNodeWrapper");
        }
        inline app::XmlNodeWrapper* create() {
            return il2cpp::create_object<app::XmlNodeWrapper>(get_class());
        }
    } // namespace XmlNodeWrapper
} // namespace app::classes::types
