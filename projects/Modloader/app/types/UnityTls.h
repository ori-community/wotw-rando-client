#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls__Class.h>
#include <Modloader/app/structs/UnityTls.h>

namespace app::classes::types {
    namespace UnityTls {
        inline app::UnityTls__Class** type_info = (app::UnityTls__Class**)(modloader::win::memory::resolve_rva(0x047050D0));
        inline app::UnityTls__Class* get_class() {
            return il2cpp::get_class<app::UnityTls__Class>(type_info, "Mono.Unity", "UnityTls");
        }
        inline app::UnityTls* create() {
            return il2cpp::create_object<app::UnityTls>(get_class());
        }
    } // namespace UnityTls
} // namespace app::classes::types
