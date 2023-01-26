#pragma once
#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/AddressFamily__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddressFamily__Enum {
        inline app::AddressFamily__Enum__Class** type_info() {
            static app::AddressFamily__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddressFamily__Enum__Class**)(modloader::win::memory::resolve_rva(0x04736E48));
            }
            return cache;
        }
        inline app::AddressFamily__Enum__Class* get_class() {
            return il2cpp::get_class<app::AddressFamily__Enum__Class>(type_info(), "System.Net.Sockets", "AddressFamily");
        }
        inline app::AddressFamily__Enum* create() {
            return il2cpp::create_object<app::AddressFamily__Enum>(get_class());
        }
    } // namespace AddressFamily__Enum
} // namespace app::classes::types
