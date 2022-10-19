#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivatedServiceTypeEntry {
        inline app::ActivatedServiceTypeEntry__Class** type_info = (app::ActivatedServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047740F0));
        inline app::ActivatedServiceTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::ActivatedServiceTypeEntry__Class>(type_info, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
        }
        inline app::ActivatedServiceTypeEntry* create() {
            return il2cpp::create_object<app::ActivatedServiceTypeEntry>(get_class());
        }
    } // namespace ActivatedServiceTypeEntry
} // namespace app::classes::types
