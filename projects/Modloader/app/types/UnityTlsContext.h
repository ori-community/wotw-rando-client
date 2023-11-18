#pragma once
#include <Modloader/app/structs/UnityTlsContext.h>
#include <Modloader/app/structs/UnityTlsContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTlsContext {
        inline app::UnityTlsContext__Class** type_info() {
            static app::UnityTlsContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityTlsContext__Class**)(modloader::win::memory::resolve_rva(0x04713920));
            }
            return cache;
        }
        inline app::UnityTlsContext__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsContext__Class>(type_info(), "Mono.Unity", "UnityTlsContext");
        }
        inline app::UnityTlsContext* create() {
            return il2cpp::create_object<app::UnityTlsContext>(get_class());
        }
    } // namespace UnityTlsContext
} // namespace app::classes::types
