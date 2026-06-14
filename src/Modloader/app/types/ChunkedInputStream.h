#pragma once
#include <Modloader/app/structs/ChunkedInputStream.h>
#include <Modloader/app/structs/ChunkedInputStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChunkedInputStream {
        inline app::ChunkedInputStream__Class** type_info() {
            static app::ChunkedInputStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChunkedInputStream__Class**)(modloader::win::memory::resolve_rva(0x04738590));
            }
            return cache;
        }
        inline app::ChunkedInputStream__Class* get_class() {
            return il2cpp::get_class<app::ChunkedInputStream__Class>(type_info(), "System.Net", "ChunkedInputStream");
        }
        inline app::ChunkedInputStream* create() {
            return il2cpp::create_object<app::ChunkedInputStream>(get_class());
        }
    } // namespace ChunkedInputStream
} // namespace app::classes::types
