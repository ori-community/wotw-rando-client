#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XdrBuilder_ElementContent {
        inline app::XdrBuilder_ElementContent__Class** type_info = (app::XdrBuilder_ElementContent__Class**)(modloader::win::memory::resolve_rva(0x04737B90));
        inline app::XdrBuilder_ElementContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_ElementContent__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "ElementContent");
        }
        inline app::XdrBuilder_ElementContent* create() {
            return il2cpp::create_object<app::XdrBuilder_ElementContent>(get_class());
        }
    } // namespace XdrBuilder_ElementContent
} // namespace app::classes::types
