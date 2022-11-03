#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CamelCaseNamingStrategy {
        inline app::CamelCaseNamingStrategy__Class** type_info = (app::CamelCaseNamingStrategy__Class**)(modloader::win::memory::resolve_rva(0x04742AA0));
        inline app::CamelCaseNamingStrategy__Class* get_class() {
            return il2cpp::get_class<app::CamelCaseNamingStrategy__Class>(type_info, "Newtonsoft.Json.Serialization", "CamelCaseNamingStrategy");
        }
        inline app::CamelCaseNamingStrategy* create() {
            return il2cpp::create_object<app::CamelCaseNamingStrategy>(get_class());
        }
    } // namespace CamelCaseNamingStrategy
} // namespace app::classes::types
