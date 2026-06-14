#pragma once
#include <Modloader/app/structs/IJsonSerializerStrategy.h>
#include <Modloader/app/structs/IJsonSerializerStrategy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IJsonSerializerStrategy {
        inline app::IJsonSerializerStrategy__Class** type_info() {
            static app::IJsonSerializerStrategy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0474BBA8));
            }
            return cache;
        }
        inline app::IJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::IJsonSerializerStrategy__Class>(type_info(), "PlayFab.Json", "IJsonSerializerStrategy");
        }
    } // namespace IJsonSerializerStrategy
} // namespace app::classes::types
