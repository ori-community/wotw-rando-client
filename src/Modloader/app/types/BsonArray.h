#pragma once
#include <Modloader/app/structs/BsonArray.h>
#include <Modloader/app/structs/BsonArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BsonArray {
        inline app::BsonArray__Class** type_info() {
            static app::BsonArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BsonArray__Class**)(modloader::win::memory::resolve_rva(0x0477B108));
            }
            return cache;
        }
        inline app::BsonArray__Class* get_class() {
            return il2cpp::get_class<app::BsonArray__Class>(type_info(), "Newtonsoft.Json.Bson", "BsonArray");
        }
        inline app::BsonArray* create() {
            return il2cpp::create_object<app::BsonArray>(get_class());
        }
    } // namespace BsonArray
} // namespace app::classes::types
