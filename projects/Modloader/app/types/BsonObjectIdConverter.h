#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonObjectIdConverter {
        inline app::BsonObjectIdConverter__Class** type_info = (app::BsonObjectIdConverter__Class**)(modloader::win::memory::resolve_rva(0x0477E510));
        inline app::BsonObjectIdConverter__Class* get_class() {
            return il2cpp::get_class<app::BsonObjectIdConverter__Class>(type_info, "Newtonsoft.Json.Converters", "BsonObjectIdConverter");
        }
        inline app::BsonObjectIdConverter* create() {
            return il2cpp::create_object<app::BsonObjectIdConverter>(get_class());
        }
    } // namespace BsonObjectIdConverter
} // namespace app::classes::types
