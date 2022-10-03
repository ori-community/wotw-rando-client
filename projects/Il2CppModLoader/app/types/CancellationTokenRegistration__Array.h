#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancellationTokenRegistration__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancellationTokenRegistration__Array__Class** type_info;
        inline app::CancellationTokenRegistration__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationTokenRegistration__Array__Class>(type_info, "System.Threading", "CancellationTokenRegistration[]");
        }
        inline app::CancellationTokenRegistration__Array* create() {
            return il2cpp::create_object<app::CancellationTokenRegistration__Array>(get_class());
        }
    } // namespace CancellationTokenRegistration__Array
} // namespace app::classes::types
