#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MMKVPMarshaller {
        inline app::MMKVPMarshaller__Class** type_info = (app::MMKVPMarshaller__Class**)(modloader::win::memory::resolve_rva(0x04726810));
        inline app::MMKVPMarshaller__Class* get_class() {
            return il2cpp::get_class<app::MMKVPMarshaller__Class>(type_info, "Steamworks", "MMKVPMarshaller");
        }
        inline app::MMKVPMarshaller* create() {
            return il2cpp::create_object<app::MMKVPMarshaller>(get_class());
        }
    } // namespace MMKVPMarshaller
} // namespace app::classes::types
