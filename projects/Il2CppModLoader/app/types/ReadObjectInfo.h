#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadObjectInfo {
        inline app::ReadObjectInfo__Class** type_info = (app::ReadObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04725D60));
        inline app::ReadObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::ReadObjectInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
        }
        inline app::ReadObjectInfo* create() {
            return il2cpp::create_object<app::ReadObjectInfo>(get_class());
        }
    } // namespace ReadObjectInfo
} // namespace app::classes::types
