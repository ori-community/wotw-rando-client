#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationEvents {
        inline app::SerializationEvents__Class** type_info = (app::SerializationEvents__Class**)(modloader::win::memory::resolve_rva(0x0477D9F8));
        inline app::SerializationEvents__Class* get_class() {
            return il2cpp::get_class<app::SerializationEvents__Class>(type_info, "System.Runtime.Serialization", "SerializationEvents");
        }
        inline app::SerializationEvents* create() {
            return il2cpp::create_object<app::SerializationEvents>(get_class());
        }
    } // namespace SerializationEvents
} // namespace app::classes::types
