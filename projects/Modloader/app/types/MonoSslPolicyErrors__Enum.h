#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoSslPolicyErrors__Enum__Class.h>
#include <Modloader/app/structs/MonoSslPolicyErrors__Enum.h>

namespace app::classes::types {
    namespace MonoSslPolicyErrors__Enum {
        inline app::MonoSslPolicyErrors__Enum__Class** type_info = (app::MonoSslPolicyErrors__Enum__Class**)(modloader::win::memory::resolve_rva(0x047695A0));
        inline app::MonoSslPolicyErrors__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoSslPolicyErrors__Enum__Class>(type_info, "Mono.Security.Interface", "MonoSslPolicyErrors");
        }
        inline app::MonoSslPolicyErrors__Enum* create() {
            return il2cpp::create_object<app::MonoSslPolicyErrors__Enum>(get_class());
        }
    } // namespace MonoSslPolicyErrors__Enum
} // namespace app::classes::types
