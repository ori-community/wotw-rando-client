#pragma once
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdAttributeEntry__Array {
        inline app::XsdBuilder_XsdAttributeEntry__Array__Class** type_info() {
            static app::XsdBuilder_XsdAttributeEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdBuilder_XsdAttributeEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047232C8));
            }
            return cache;
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder_XsdAttributeEntry__Array__Class>(type_info(), "System.Xml.Schema", "XsdBuilder+XsdAttributeEntry[]");
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdAttributeEntry__Array>(get_class());
        }
    } // namespace XsdBuilder_XsdAttributeEntry__Array
} // namespace app::classes::types
