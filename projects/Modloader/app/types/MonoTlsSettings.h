#pragma once
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/MonoTlsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTlsSettings {
        inline app::MonoTlsSettings__Class** type_info() {
            static app::MonoTlsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoTlsSettings__Class**)(modloader::win::memory::resolve_rva(0x0477F5E0));
            }
            return cache;
        }
        inline app::MonoTlsSettings__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsSettings__Class>(type_info(), "Mono.Security.Interface", "MonoTlsSettings");
        }
        inline app::MonoTlsSettings* create() {
            return il2cpp::create_object<app::MonoTlsSettings>(get_class());
        }
    } // namespace MonoTlsSettings
} // namespace app::classes::types
