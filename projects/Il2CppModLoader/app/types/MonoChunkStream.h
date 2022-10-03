#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoChunkStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoChunkStream__Class** type_info;
        inline app::MonoChunkStream__Class* get_class() {
            return il2cpp::get_class<app::MonoChunkStream__Class>(type_info, "System.Net", "MonoChunkStream");
        }
        inline app::MonoChunkStream* create() {
            return il2cpp::create_object<app::MonoChunkStream>(get_class());
        }
    } // namespace MonoChunkStream
} // namespace app::classes::types
