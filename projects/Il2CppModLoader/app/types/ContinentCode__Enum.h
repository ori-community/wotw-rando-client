#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContinentCode__Enum {
        inline app::ContinentCode__Enum__Class** type_info = (app::ContinentCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04726B10));
        inline app::ContinentCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContinentCode__Enum__Class>(type_info, "PlayFab.ClientModels", "ContinentCode");
        }
        inline app::ContinentCode__Enum* create() {
            return il2cpp::create_object<app::ContinentCode__Enum>(get_class());
        }
    } // namespace ContinentCode__Enum
} // namespace app::classes::types
