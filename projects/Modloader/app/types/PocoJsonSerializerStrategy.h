#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PocoJsonSerializerStrategy {
        inline app::PocoJsonSerializerStrategy__Class** type_info = (app::PocoJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0472E0B8));
        inline app::PocoJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::PocoJsonSerializerStrategy__Class>(type_info, "PlayFab.Json", "PocoJsonSerializerStrategy");
        }
        inline app::PocoJsonSerializerStrategy* create() {
            return il2cpp::create_object<app::PocoJsonSerializerStrategy>(get_class());
        }
    } // namespace PocoJsonSerializerStrategy
} // namespace app::classes::types
