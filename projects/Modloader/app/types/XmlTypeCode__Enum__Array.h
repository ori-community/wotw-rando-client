#pragma once
#include <Modloader/app/structs/XmlTypeCode__Enum__Array.h>
#include <Modloader/app/structs/XmlTypeCode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeCode__Enum__Array {
        inline app::XmlTypeCode__Enum__Array__Class** type_info() {
            static app::XmlTypeCode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047700D8));
            }
            return cache;
        }
        inline app::XmlTypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeCode__Enum__Array__Class>(type_info(), "System.Xml.Schema", "XmlTypeCode[]");
        }
        inline app::XmlTypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::XmlTypeCode__Enum__Array>(get_class());
        }
    } // namespace XmlTypeCode__Enum__Array
} // namespace app::classes::types
