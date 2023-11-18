#pragma once
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/ISerializationBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializationBinder {
        inline app::ISerializationBinder__Class** type_info() {
            static app::ISerializationBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializationBinder__Class**)(modloader::win::memory::resolve_rva(0x04748E28));
            }
            return cache;
        }
        inline app::ISerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::ISerializationBinder__Class>(type_info(), "Newtonsoft.Json.Serialization", "ISerializationBinder");
        }
    } // namespace ISerializationBinder
} // namespace app::classes::types
