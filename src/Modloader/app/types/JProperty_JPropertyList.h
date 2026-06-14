#pragma once
#include <Modloader/app/structs/JProperty_JPropertyList.h>
#include <Modloader/app/structs/JProperty_JPropertyList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JProperty_JPropertyList {
        inline app::JProperty_JPropertyList__Class** type_info() {
            static app::JProperty_JPropertyList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JProperty_JPropertyList__Class**)(modloader::win::memory::resolve_rva(0x04793D90));
            }
            return cache;
        }
        inline app::JProperty_JPropertyList__Class* get_class() {
            return il2cpp::get_nested_class<app::JProperty_JPropertyList__Class>(type_info(), "Newtonsoft.Json.Linq", "JProperty", "JPropertyList");
        }
        inline app::JProperty_JPropertyList* create() {
            return il2cpp::create_object<app::JProperty_JPropertyList>(get_class());
        }
    } // namespace JProperty_JPropertyList
} // namespace app::classes::types
