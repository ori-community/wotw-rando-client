#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SchemaSerializationMode__Enum__Class.h>
#include <Modloader/app/structs/SchemaSerializationMode__Enum.h>

namespace app::classes::types {
    namespace SchemaSerializationMode__Enum {
        inline app::SchemaSerializationMode__Enum__Class** type_info = (app::SchemaSerializationMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749C50));
        inline app::SchemaSerializationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaSerializationMode__Enum__Class>(type_info, "System.Data", "SchemaSerializationMode");
        }
        inline app::SchemaSerializationMode__Enum* create() {
            return il2cpp::create_object<app::SchemaSerializationMode__Enum>(get_class());
        }
    } // namespace SchemaSerializationMode__Enum
} // namespace app::classes::types
