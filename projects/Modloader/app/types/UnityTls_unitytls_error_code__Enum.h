#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum__Class.h>
#include <Modloader/app/structs/UnityTls_unitytls_error_code__Enum.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_error_code__Enum {
        inline app::UnityTls_unitytls_error_code__Enum__Class** type_info = (app::UnityTls_unitytls_error_code__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470A8F0));
        inline app::UnityTls_unitytls_error_code__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_error_code__Enum__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_error_code");
        }
        inline app::UnityTls_unitytls_error_code__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_error_code__Enum>(get_class());
        }
    } // namespace UnityTls_unitytls_error_code__Enum
} // namespace app::classes::types
