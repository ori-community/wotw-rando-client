#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueTypeFixupInfo {
        inline app::ValueTypeFixupInfo__Class** type_info = (app::ValueTypeFixupInfo__Class**)(modloader::win::memory::resolve_rva(0x047573D8));
        inline app::ValueTypeFixupInfo__Class* get_class() {
            return il2cpp::get_class<app::ValueTypeFixupInfo__Class>(type_info, "System.Runtime.Serialization", "ValueTypeFixupInfo");
        }
        inline app::ValueTypeFixupInfo* create() {
            return il2cpp::create_object<app::ValueTypeFixupInfo>(get_class());
        }
    } // namespace ValueTypeFixupInfo
} // namespace app::classes::types
