#pragma once
#include <Modloader/app/structs/PocoJsonSerializerStrategy.h>
#include <Modloader/app/structs/PocoJsonSerializerStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PocoJsonSerializerStrategy {
        inline app::PocoJsonSerializerStrategy__Class** type_info() {
            static app::PocoJsonSerializerStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PocoJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0472E0B8));
            }
            return cache;
        }
        inline app::PocoJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::PocoJsonSerializerStrategy__Class>(type_info(), "PlayFab.Json", "PocoJsonSerializerStrategy");
        }
        inline app::PocoJsonSerializerStrategy* create() {
            return il2cpp::create_object<app::PocoJsonSerializerStrategy>(get_class());
        }
    } // namespace PocoJsonSerializerStrategy
} // namespace app::classes::types
