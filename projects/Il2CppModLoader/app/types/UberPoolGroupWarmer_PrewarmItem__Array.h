#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer_PrewarmItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolGroupWarmer_PrewarmItem__Array__Class** type_info;
        inline app::UberPoolGroupWarmer_PrewarmItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroupWarmer_PrewarmItem__Array__Class>(type_info, "", "UberPoolGroupWarmer+PrewarmItem[]");
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer_PrewarmItem__Array>(get_class());
        }
    } // namespace UberPoolGroupWarmer_PrewarmItem__Array
} // namespace app::classes::types
