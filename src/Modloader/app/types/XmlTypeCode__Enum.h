#pragma once
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum__Array.h>
#include <Modloader/app/structs/XmlTypeCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeCode__Enum {
        inline app::XmlTypeCode__Enum__Class** type_info() {
            static app::XmlTypeCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478D2A0));
            }
            return cache;
        }
        inline app::XmlTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeCode__Enum__Class>(type_info(), "System.Xml.Schema", "XmlTypeCode");
        }
        inline app::XmlTypeCode__Enum* create() {
            return il2cpp::create_object<app::XmlTypeCode__Enum>(get_class());
        }
        inline app::XmlTypeCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTypeCode__Enum__Array>(get_class(), size);
        }
        inline app::XmlTypeCode__Enum__Array* create_array(const std::vector<app::XmlTypeCode__Enum*>& items) {
            return il2cpp::array_new<app::XmlTypeCode__Enum__Array>(get_class(), items);
        }
    } // namespace XmlTypeCode__Enum
} // namespace app::classes::types
