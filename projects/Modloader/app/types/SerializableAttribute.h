#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializableAttribute__Class.h>
#include <Modloader/app/structs/SerializableAttribute.h>

namespace app::classes::types {
    namespace SerializableAttribute {
        inline app::SerializableAttribute__Class** type_info = (app::SerializableAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470DB30));
        inline app::SerializableAttribute__Class* get_class() {
            return il2cpp::get_class<app::SerializableAttribute__Class>(type_info, "System", "SerializableAttribute");
        }
        inline app::SerializableAttribute* create() {
            return il2cpp::create_object<app::SerializableAttribute>(get_class());
        }
    } // namespace SerializableAttribute
} // namespace app::classes::types
