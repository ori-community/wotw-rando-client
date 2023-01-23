#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializationHeaderRecord__Class.h>
#include <Modloader/app/structs/SerializationHeaderRecord.h>

namespace app::classes::types {
    namespace SerializationHeaderRecord {
        inline app::SerializationHeaderRecord__Class** type_info = (app::SerializationHeaderRecord__Class**)(modloader::win::memory::resolve_rva(0x0477C3A0));
        inline app::SerializationHeaderRecord__Class* get_class() {
            return il2cpp::get_class<app::SerializationHeaderRecord__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
        }
        inline app::SerializationHeaderRecord* create() {
            return il2cpp::create_object<app::SerializationHeaderRecord>(get_class());
        }
    } // namespace SerializationHeaderRecord
} // namespace app::classes::types
