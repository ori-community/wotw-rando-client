#pragma once
#include <Modloader/app/structs/XdrBuilder_GroupContent.h>
#include <Modloader/app/structs/XdrBuilder_GroupContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_GroupContent {
        inline app::XdrBuilder_GroupContent__Class** type_info() {
            static app::XdrBuilder_GroupContent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XdrBuilder_GroupContent__Class**)(modloader::win::memory::resolve_rva(0x04755428));
            }
            return cache;
        }
        inline app::XdrBuilder_GroupContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_GroupContent__Class>(type_info(), "System.Xml.Schema", "XdrBuilder", "GroupContent");
        }
        inline app::XdrBuilder_GroupContent* create() {
            return il2cpp::create_object<app::XdrBuilder_GroupContent>(get_class());
        }
    } // namespace XdrBuilder_GroupContent
} // namespace app::classes::types
