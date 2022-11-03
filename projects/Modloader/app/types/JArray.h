#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JArray {
        inline app::JArray__Class** type_info = (app::JArray__Class**)(modloader::win::memory::resolve_rva(0x04786F40));
        inline app::JArray__Class* get_class() {
            return il2cpp::get_class<app::JArray__Class>(type_info, "Newtonsoft.Json.Linq", "JArray");
        }
        inline app::JArray* create() {
            return il2cpp::create_object<app::JArray>(get_class());
        }
    } // namespace JArray
} // namespace app::classes::types
