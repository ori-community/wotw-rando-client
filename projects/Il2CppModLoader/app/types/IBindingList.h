#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBindingList {
        inline app::IBindingList__Class** type_info = (app::IBindingList__Class**)(modloader::win::memory::resolve_rva(0x04724480));
        inline app::IBindingList__Class* get_class() {
            return il2cpp::get_class<app::IBindingList__Class>(type_info, "System.ComponentModel", "IBindingList");
        }
    } // namespace IBindingList
} // namespace app::classes::types
