#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XdrBuilder_AttributeContent {
        inline app::XdrBuilder_AttributeContent__Class** type_info = (app::XdrBuilder_AttributeContent__Class**)(modloader::win::memory::resolve_rva(0x04795398));
        inline app::XdrBuilder_AttributeContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_AttributeContent__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "AttributeContent");
        }
        inline app::XdrBuilder_AttributeContent* create() {
            return il2cpp::create_object<app::XdrBuilder_AttributeContent>(get_class());
        }
    } // namespace XdrBuilder_AttributeContent
} // namespace app::classes::types
