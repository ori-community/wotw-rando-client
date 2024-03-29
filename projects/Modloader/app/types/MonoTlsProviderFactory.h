#pragma once
#include <Modloader/app/structs/MonoTlsProviderFactory.h>
#include <Modloader/app/structs/MonoTlsProviderFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTlsProviderFactory {
        inline app::MonoTlsProviderFactory__Class** type_info() {
            static app::MonoTlsProviderFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoTlsProviderFactory__Class**)(modloader::win::memory::resolve_rva(0x04724FF8));
            }
            return cache;
        }
        inline app::MonoTlsProviderFactory__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProviderFactory__Class>(type_info(), "Mono.Net.Security", "MonoTlsProviderFactory");
        }
        inline app::MonoTlsProviderFactory* create() {
            return il2cpp::create_object<app::MonoTlsProviderFactory>(get_class());
        }
    } // namespace MonoTlsProviderFactory
} // namespace app::classes::types
