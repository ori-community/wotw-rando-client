#pragma once
#include <Modloader/app/structs/XdrBuilder_ElementContent.h>
#include <Modloader/app/structs/XdrBuilder_ElementContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_ElementContent {
        inline app::XdrBuilder_ElementContent__Class** type_info() {
            static app::XdrBuilder_ElementContent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_ElementContent__Class**)(modloader::win::memory::resolve_rva(0x04737B90));
            }
            return cache;
        }
        inline app::XdrBuilder_ElementContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_ElementContent__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "ElementContent");
        }
        inline app::XdrBuilder_ElementContent* create() {
            return il2cpp::create_object<app::XdrBuilder_ElementContent>(get_class());
        }
    } // namespace XdrBuilder_ElementContent
} // namespace app::classes::types
