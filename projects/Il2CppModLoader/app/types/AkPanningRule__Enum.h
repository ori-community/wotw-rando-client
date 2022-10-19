#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkPanningRule__Enum {
        inline app::AkPanningRule__Enum__Class** type_info = (app::AkPanningRule__Enum__Class**)(modloader::win::memory::resolve_rva(0x047923D8));
        inline app::AkPanningRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPanningRule__Enum__Class>(type_info, "", "AkPanningRule");
        }
        inline app::AkPanningRule__Enum* create() {
            return il2cpp::create_object<app::AkPanningRule__Enum>(get_class());
        }
    } // namespace AkPanningRule__Enum
} // namespace app::classes::types
