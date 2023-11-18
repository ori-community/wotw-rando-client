#pragma once
#include <Modloader/app/structs/MonoTlsProvider__Array.h>
#include <Modloader/app/structs/MonoTlsProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTlsProvider__Array {
        inline app::MonoTlsProvider__Array__Class** type_info() {
            static app::MonoTlsProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoTlsProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoTlsProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProvider__Array__Class>(type_info(), "Mono.Security.Interface", "MonoTlsProvider[]");
        }
        inline app::MonoTlsProvider__Array* create() {
            return il2cpp::create_object<app::MonoTlsProvider__Array>(get_class());
        }
    } // namespace MonoTlsProvider__Array
} // namespace app::classes::types
