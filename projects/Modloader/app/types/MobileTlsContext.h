#pragma once
#include <Modloader/app/structs/MobileTlsContext.h>
#include <Modloader/app/structs/MobileTlsContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MobileTlsContext {
        inline app::MobileTlsContext__Class** type_info() {
            static app::MobileTlsContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MobileTlsContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MobileTlsContext__Class* get_class() {
            return il2cpp::get_class<app::MobileTlsContext__Class>(type_info(), "Mono.Net.Security", "MobileTlsContext");
        }
        inline app::MobileTlsContext* create() {
            return il2cpp::create_object<app::MobileTlsContext>(get_class());
        }
    } // namespace MobileTlsContext
} // namespace app::classes::types
