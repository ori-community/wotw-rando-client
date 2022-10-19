#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RtFieldInfo {
        inline app::RtFieldInfo__Class** type_info = (app::RtFieldInfo__Class**)(modloader::win::memory::resolve_rva(0x0474E498));
        inline app::RtFieldInfo__Class* get_class() {
            return il2cpp::get_class<app::RtFieldInfo__Class>(type_info, "System.Reflection", "RtFieldInfo");
        }
        inline app::RtFieldInfo* create() {
            return il2cpp::create_object<app::RtFieldInfo>(get_class());
        }
    } // namespace RtFieldInfo
} // namespace app::classes::types
