#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScatterGatherBuffers_MemoryChunk {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScatterGatherBuffers_MemoryChunk__Class** type_info;
        inline app::ScatterGatherBuffers_MemoryChunk__Class* get_class() {
            return il2cpp::get_nested_class<app::ScatterGatherBuffers_MemoryChunk__Class>(type_info, "System.Net", "ScatterGatherBuffers", "MemoryChunk");
        }
        inline app::ScatterGatherBuffers_MemoryChunk* create() {
            return il2cpp::create_object<app::ScatterGatherBuffers_MemoryChunk>(get_class());
        }
    } // namespace ScatterGatherBuffers_MemoryChunk
} // namespace app::classes::types
