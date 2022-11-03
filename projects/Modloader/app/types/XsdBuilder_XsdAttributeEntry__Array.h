#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdAttributeEntry__Array {
        inline app::XsdBuilder_XsdAttributeEntry__Array__Class** type_info = (app::XsdBuilder_XsdAttributeEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047232C8));
        inline app::XsdBuilder_XsdAttributeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder_XsdAttributeEntry__Array__Class>(type_info, "System.Xml.Schema", "XsdBuilder+XsdAttributeEntry[]");
        }
        inline app::XsdBuilder_XsdAttributeEntry__Array* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdAttributeEntry__Array>(get_class());
        }
    } // namespace XsdBuilder_XsdAttributeEntry__Array
} // namespace app::classes::types
