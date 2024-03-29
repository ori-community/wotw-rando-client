#pragma once
#include <Modloader/app/structs/X509Extension.h>
#include <Modloader/app/structs/X509Extension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Extension {
        inline app::X509Extension__Class** type_info() {
            static app::X509Extension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Extension__Class**)(modloader::win::memory::resolve_rva(0x04744498));
            }
            return cache;
        }
        inline app::X509Extension__Class* get_class() {
            return il2cpp::get_class<app::X509Extension__Class>(type_info(), "Mono.Security.X509", "X509Extension");
        }
        inline app::X509Extension* create() {
            return il2cpp::create_object<app::X509Extension>(get_class());
        }
    } // namespace X509Extension
} // namespace app::classes::types
