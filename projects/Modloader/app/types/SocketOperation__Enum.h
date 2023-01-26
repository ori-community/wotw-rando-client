#pragma once
#include <Modloader/app/structs/SocketOperation__Enum.h>
#include <Modloader/app/structs/SocketOperation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketOperation__Enum {
        inline app::SocketOperation__Enum__Class** type_info() {
            static app::SocketOperation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SocketOperation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C9B8));
            }
            return cache;
        }
        inline app::SocketOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SocketOperation__Enum__Class>(type_info(), "System.Net.Sockets", "SocketOperation");
        }
        inline app::SocketOperation__Enum* create() {
            return il2cpp::create_object<app::SocketOperation__Enum>(get_class());
        }
    } // namespace SocketOperation__Enum
} // namespace app::classes::types
