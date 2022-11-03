#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScatterGatherBuffers_MemoryChunk {
        inline app::ScatterGatherBuffers_MemoryChunk__Class** type_info = (app::ScatterGatherBuffers_MemoryChunk__Class**)(modloader::win::memory::resolve_rva(0x04750D20));
        inline app::ScatterGatherBuffers_MemoryChunk__Class* get_class() {
            return il2cpp::get_nested_class<app::ScatterGatherBuffers_MemoryChunk__Class>(type_info, "System.Net", "ScatterGatherBuffers", "MemoryChunk");
        }
        inline app::ScatterGatherBuffers_MemoryChunk* create() {
            return il2cpp::create_object<app::ScatterGatherBuffers_MemoryChunk>(get_class());
        }
    } // namespace ScatterGatherBuffers_MemoryChunk
} // namespace app::classes::types
