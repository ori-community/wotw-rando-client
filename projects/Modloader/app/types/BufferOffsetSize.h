#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BufferOffsetSize {
        inline app::BufferOffsetSize__Class** type_info = (app::BufferOffsetSize__Class**)(modloader::win::memory::resolve_rva(0x0476D698));
        inline app::BufferOffsetSize__Class* get_class() {
            return il2cpp::get_class<app::BufferOffsetSize__Class>(type_info, "Mono.Net.Security", "BufferOffsetSize");
        }
        inline app::BufferOffsetSize* create() {
            return il2cpp::create_object<app::BufferOffsetSize>(get_class());
        }
    } // namespace BufferOffsetSize
} // namespace app::classes::types
