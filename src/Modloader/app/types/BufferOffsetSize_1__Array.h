#pragma once
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#include <Modloader/app/structs/BufferOffsetSize_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BufferOffsetSize_1__Array {
        inline app::BufferOffsetSize_1__Array__Class** type_info() {
            static app::BufferOffsetSize_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BufferOffsetSize_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04730F40));
            }
            return cache;
        }
        inline app::BufferOffsetSize_1__Array__Class* get_class() {
            return il2cpp::get_class<app::BufferOffsetSize_1__Array__Class>(type_info(), "System.Net", "BufferOffsetSize[]");
        }
        inline app::BufferOffsetSize_1__Array* create() {
            return il2cpp::create_object<app::BufferOffsetSize_1__Array>(get_class());
        }
    } // namespace BufferOffsetSize_1__Array
} // namespace app::classes::types
