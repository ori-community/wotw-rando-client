#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PooledStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PooledStream__Class** type_info;
        inline app::PooledStream__Class* get_class() {
            return il2cpp::get_class<app::PooledStream__Class>(type_info, "System.Net", "PooledStream");
        }
        inline app::PooledStream* create() {
            return il2cpp::create_object<app::PooledStream>(get_class());
        }
    } // namespace PooledStream
} // namespace app::classes::types
