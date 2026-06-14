#pragma once
#include <Modloader/app/structs/Ipv6Element.h>
#include <Modloader/app/structs/Ipv6Element__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ipv6Element {
        inline app::Ipv6Element__Class** type_info() {
            static app::Ipv6Element__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ipv6Element__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ipv6Element__Class* get_class() {
            return il2cpp::get_class<app::Ipv6Element__Class>(type_info(), "System.Net.Configuration", "Ipv6Element");
        }
        inline app::Ipv6Element* create() {
            return il2cpp::create_object<app::Ipv6Element>(get_class());
        }
    } // namespace Ipv6Element
} // namespace app::classes::types
