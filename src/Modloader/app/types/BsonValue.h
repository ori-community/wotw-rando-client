#pragma once
#include <Modloader/app/structs/BsonValue.h>
#include <Modloader/app/structs/BsonValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonValue {
        inline app::BsonValue__Class** type_info() {
            static app::BsonValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonValue__Class**)(modloader::win::memory::resolve_rva(0x047622C0));
            }
            return cache;
        }
        inline app::BsonValue__Class* get_class() {
            return il2cpp::get_class<app::BsonValue__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonValue");
        }
        inline app::BsonValue* create() {
            return il2cpp::create_object<app::BsonValue>(get_class());
        }
    } // namespace BsonValue
} // namespace app::classes::types
