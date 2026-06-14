#pragma once
#include <Modloader/app/structs/JsonISerializableContract.h>
#include <Modloader/app/structs/JsonISerializableContract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonISerializableContract {
        inline app::JsonISerializableContract__Class** type_info() {
            static app::JsonISerializableContract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonISerializableContract__Class**)(modloader::win::memory::resolve_rva(0x04740880));
            }
            return cache;
        }
        inline app::JsonISerializableContract__Class* get_class() {
            return il2cpp::get_class<app::JsonISerializableContract__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonISerializableContract");
        }
        inline app::JsonISerializableContract* create() {
            return il2cpp::create_object<app::JsonISerializableContract>(get_class());
        }
    } // namespace JsonISerializableContract
} // namespace app::classes::types
