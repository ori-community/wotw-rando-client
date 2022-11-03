#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_ciphersuite__Enum__Array {
        inline app::UnityTls_unitytls_ciphersuite__Enum__Array__Class** type_info = (app::UnityTls_unitytls_ciphersuite__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0470E7E8));
        inline app::UnityTls_unitytls_ciphersuite__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_ciphersuite__Enum__Array__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_ciphersuite[]");
        }
        inline app::UnityTls_unitytls_ciphersuite__Enum__Array* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_ciphersuite__Enum__Array>(get_class());
        }
    } // namespace UnityTls_unitytls_ciphersuite__Enum__Array
} // namespace app::classes::types
