#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JObject {
        inline app::JObject__Class** type_info = (app::JObject__Class**)(modloader::win::memory::resolve_rva(0x047376E8));
        inline app::JObject__Class* get_class() {
            return il2cpp::get_class<app::JObject__Class>(type_info, "Newtonsoft.Json.Linq", "JObject");
        }
        inline app::JObject* create() {
            return il2cpp::create_object<app::JObject>(get_class());
        }
    } // namespace JObject
} // namespace app::classes::types
