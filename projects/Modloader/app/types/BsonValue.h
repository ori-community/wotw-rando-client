#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BsonValue__Class.h>
#include <Modloader/app/structs/BsonValue.h>

namespace app::classes::types {
    namespace BsonValue {
        inline app::BsonValue__Class** type_info = (app::BsonValue__Class**)(modloader::win::memory::resolve_rva(0x047622C0));
        inline app::BsonValue__Class* get_class() {
            return il2cpp::get_class<app::BsonValue__Class>(type_info, "Newtonsoft.Json.Bson", "BsonValue");
        }
        inline app::BsonValue* create() {
            return il2cpp::create_object<app::BsonValue>(get_class());
        }
    } // namespace BsonValue
} // namespace app::classes::types
