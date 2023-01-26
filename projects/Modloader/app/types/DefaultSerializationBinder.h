#pragma once
#include <Modloader/app/structs/DefaultSerializationBinder.h>
#include <Modloader/app/structs/DefaultSerializationBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultSerializationBinder {
        inline app::DefaultSerializationBinder__Class** type_info() {
            static app::DefaultSerializationBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultSerializationBinder__Class**)(modloader::win::memory::resolve_rva(0x04780E60));
            }
            return cache;
        }
        inline app::DefaultSerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::DefaultSerializationBinder__Class>(type_info(), "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
        }
        inline app::DefaultSerializationBinder* create() {
            return il2cpp::create_object<app::DefaultSerializationBinder>(get_class());
        }
    } // namespace DefaultSerializationBinder
} // namespace app::classes::types
