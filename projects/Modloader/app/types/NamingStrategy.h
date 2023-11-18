#pragma once
#include <Modloader/app/structs/NamingStrategy.h>
#include <Modloader/app/structs/NamingStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamingStrategy {
        inline app::NamingStrategy__Class** type_info() {
            static app::NamingStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NamingStrategy__Class**)(modloader::win::memory::resolve_rva(0x04728B90));
            }
            return cache;
        }
        inline app::NamingStrategy__Class* get_class() {
            return il2cpp::get_class<app::NamingStrategy__Class>(type_info(), "Newtonsoft.Json.Serialization", "NamingStrategy");
        }
        inline app::NamingStrategy* create() {
            return il2cpp::create_object<app::NamingStrategy>(get_class());
        }
    } // namespace NamingStrategy
} // namespace app::classes::types
