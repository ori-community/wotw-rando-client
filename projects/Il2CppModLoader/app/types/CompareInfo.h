#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompareInfo {
        inline app::CompareInfo__Class** type_info = (app::CompareInfo__Class**)(modloader::win::memory::resolve_rva(0x04725A60));
        inline app::CompareInfo__Class* get_class() {
            return il2cpp::get_class<app::CompareInfo__Class>(type_info, "System.Globalization", "CompareInfo");
        }
        inline app::CompareInfo* create() {
            return il2cpp::create_object<app::CompareInfo>(get_class());
        }
    } // namespace CompareInfo
} // namespace app::classes::types
