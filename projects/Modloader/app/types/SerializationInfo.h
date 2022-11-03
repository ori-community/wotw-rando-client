#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationInfo {
        inline app::SerializationInfo__Class** type_info = (app::SerializationInfo__Class**)(modloader::win::memory::resolve_rva(0x047592D0));
        inline app::SerializationInfo__Class* get_class() {
            return il2cpp::get_class<app::SerializationInfo__Class>(type_info, "System.Runtime.Serialization", "SerializationInfo");
        }
        inline app::SerializationInfo* create() {
            return il2cpp::create_object<app::SerializationInfo>(get_class());
        }
    } // namespace SerializationInfo
} // namespace app::classes::types
