#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PooledStream {
        inline app::PooledStream__Class** type_info = (app::PooledStream__Class**)(modloader::win::memory::resolve_rva(0x04763D38));
        inline app::PooledStream__Class* get_class() {
            return il2cpp::get_class<app::PooledStream__Class>(type_info, "System.Net", "PooledStream");
        }
        inline app::PooledStream* create() {
            return il2cpp::create_object<app::PooledStream>(get_class());
        }
    } // namespace PooledStream
} // namespace app::classes::types
