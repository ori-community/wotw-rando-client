#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt32TypeInfo {
        inline app::UInt32TypeInfo__Class** type_info = (app::UInt32TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047932F0));
        inline app::UInt32TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt32TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt32TypeInfo");
        }
        inline app::UInt32TypeInfo* create() {
            return il2cpp::create_object<app::UInt32TypeInfo>(get_class());
        }
    } // namespace UInt32TypeInfo
} // namespace app::classes::types
