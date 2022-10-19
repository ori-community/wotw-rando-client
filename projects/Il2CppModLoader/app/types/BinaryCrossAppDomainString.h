#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainString {
        inline app::BinaryCrossAppDomainString__Class** type_info = (app::BinaryCrossAppDomainString__Class**)(modloader::win::memory::resolve_rva(0x04757F20));
        inline app::BinaryCrossAppDomainString__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainString__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
        }
        inline app::BinaryCrossAppDomainString* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainString>(get_class());
        }
    } // namespace BinaryCrossAppDomainString
} // namespace app::classes::types
