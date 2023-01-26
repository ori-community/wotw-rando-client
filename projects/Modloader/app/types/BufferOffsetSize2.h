#pragma once
#include <Modloader/app/structs/BufferOffsetSize2.h>
#include <Modloader/app/structs/BufferOffsetSize2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BufferOffsetSize2 {
        inline app::BufferOffsetSize2__Class** type_info() {
            static app::BufferOffsetSize2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BufferOffsetSize2__Class**)(modloader::win::memory::resolve_rva(0x0477F630));
            }
            return cache;
        }
        inline app::BufferOffsetSize2__Class* get_class() {
            return il2cpp::get_class<app::BufferOffsetSize2__Class>(type_info(), "Mono.Net.Security", "BufferOffsetSize2");
        }
        inline app::BufferOffsetSize2* create() {
            return il2cpp::create_object<app::BufferOffsetSize2>(get_class());
        }
    } // namespace BufferOffsetSize2
} // namespace app::classes::types
