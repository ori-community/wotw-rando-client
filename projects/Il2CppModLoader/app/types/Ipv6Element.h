#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ipv6Element {
        namespace {
            inline app::Ipv6Element__Class* type_info_ref = nullptr;
        }
        inline app::Ipv6Element__Class** type_info = &type_info_ref;
        inline app::Ipv6Element__Class* get_class() {
            return il2cpp::get_class<app::Ipv6Element__Class>(type_info, "System.Net.Configuration", "Ipv6Element");
        }
        inline app::Ipv6Element* create() {
            return il2cpp::create_object<app::Ipv6Element>(get_class());
        }
    } // namespace Ipv6Element
} // namespace app::classes::types
