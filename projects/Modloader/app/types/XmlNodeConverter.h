#pragma once
#include <Modloader/app/structs/XmlNodeConverter.h>
#include <Modloader/app/structs/XmlNodeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeConverter {
        inline app::XmlNodeConverter__Class** type_info() {
            static app::XmlNodeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeConverter__Class**)(modloader::win::memory::resolve_rva(0x047270A8));
            }
            return cache;
        }
        inline app::XmlNodeConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "XmlNodeConverter");
        }
        inline app::XmlNodeConverter* create() {
            return il2cpp::create_object<app::XmlNodeConverter>(get_class());
        }
    } // namespace XmlNodeConverter
} // namespace app::classes::types
