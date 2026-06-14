#pragma once
#include <Modloader/app/structs/CamelCaseNamingStrategy.h>
#include <Modloader/app/structs/CamelCaseNamingStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CamelCaseNamingStrategy {
        inline app::CamelCaseNamingStrategy__Class** type_info() {
            static app::CamelCaseNamingStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CamelCaseNamingStrategy__Class**)(modloader::win::memory::resolve_rva(0x04742AA0));
            }
            return cache;
        }
        inline app::CamelCaseNamingStrategy__Class* get_class() {
            return il2cpp::get_class<app::CamelCaseNamingStrategy__Class>(type_info(), "Newtonsoft.Json.Serialization", "CamelCaseNamingStrategy");
        }
        inline app::CamelCaseNamingStrategy* create() {
            return il2cpp::create_object<app::CamelCaseNamingStrategy>(get_class());
        }
    } // namespace CamelCaseNamingStrategy
} // namespace app::classes::types
