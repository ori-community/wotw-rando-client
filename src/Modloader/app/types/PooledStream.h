#pragma once
#include <Modloader/app/structs/PooledStream.h>
#include <Modloader/app/structs/PooledStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PooledStream {
        inline app::PooledStream__Class** type_info() {
            static app::PooledStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PooledStream__Class**)(modloader::win::memory::resolve_rva(0x04763D38));
            }
            return cache;
        }
        inline app::PooledStream__Class* get_class() {
            return il2cpp::get_class<app::PooledStream__Class>(type_info(), "System.Net", "PooledStream");
        }
        inline app::PooledStream* create() {
            return il2cpp::create_object<app::PooledStream>(get_class());
        }
    } // namespace PooledStream
} // namespace app::classes::types
