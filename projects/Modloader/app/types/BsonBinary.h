#pragma once
#include <Modloader/app/structs/BsonBinary.h>
#include <Modloader/app/structs/BsonBinary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonBinary {
        inline app::BsonBinary__Class** type_info() {
            static app::BsonBinary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonBinary__Class**)(modloader::win::memory::resolve_rva(0x04716700));
            }
            return cache;
        }
        inline app::BsonBinary__Class* get_class() {
            return il2cpp::get_class<app::BsonBinary__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonBinary");
        }
        inline app::BsonBinary* create() {
            return il2cpp::create_object<app::BsonBinary>(get_class());
        }
    } // namespace BsonBinary
} // namespace app::classes::types
