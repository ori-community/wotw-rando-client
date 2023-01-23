#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XdrBuilder_ElementContent__Class.h>
#include <Modloader/app/structs/XdrBuilder_ElementContent.h>

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
