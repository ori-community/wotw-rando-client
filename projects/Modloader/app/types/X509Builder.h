#pragma once
#include <Modloader/app/structs/X509Builder.h>
#include <Modloader/app/structs/X509Builder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Builder {
        inline app::X509Builder__Class** type_info() {
            static app::X509Builder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509Builder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509Builder__Class* get_class() {
            return il2cpp::get_class<app::X509Builder__Class>(type_info(), "Mono.Security.X509", "X509Builder");
        }
        inline app::X509Builder* create() {
            return il2cpp::create_object<app::X509Builder>(get_class());
        }
    } // namespace X509Builder
} // namespace app::classes::types
