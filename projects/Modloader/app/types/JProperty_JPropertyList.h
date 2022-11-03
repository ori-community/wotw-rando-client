#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JProperty_JPropertyList {
        inline app::JProperty_JPropertyList__Class** type_info = (app::JProperty_JPropertyList__Class**)(modloader::win::memory::resolve_rva(0x04793D90));
        inline app::JProperty_JPropertyList__Class* get_class() {
            return il2cpp::get_nested_class<app::JProperty_JPropertyList__Class>(type_info, "Newtonsoft.Json.Linq", "JProperty", "JPropertyList");
        }
        inline app::JProperty_JPropertyList* create() {
            return il2cpp::create_object<app::JProperty_JPropertyList>(get_class());
        }
    } // namespace JProperty_JPropertyList
} // namespace app::classes::types
