#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTlsProvider__Array {
        namespace {
            app::MonoTlsProvider__Array__Class* type_info_ref = nullptr;
        }
        app::MonoTlsProvider__Array__Class** type_info = &type_info_ref;
        inline app::MonoTlsProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProvider__Array__Class>(type_info, "Mono.Security.Interface", "MonoTlsProvider[]");
        }
        inline app::MonoTlsProvider__Array* create() {
            return il2cpp::create_object<app::MonoTlsProvider__Array>(get_class());
        }
    } // namespace MonoTlsProvider__Array
} // namespace app::classes::types
