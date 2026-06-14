#pragma once
#include <Modloader/app/structs/EMatchMakingServerResponse__Enum.h>
#include <Modloader/app/structs/EMatchMakingServerResponse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EMatchMakingServerResponse__Enum {
        inline app::EMatchMakingServerResponse__Enum__Class** type_info() {
            static app::EMatchMakingServerResponse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EMatchMakingServerResponse__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753270));
            }
            return cache;
        }
        inline app::EMatchMakingServerResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMatchMakingServerResponse__Enum__Class>(type_info(), "Steamworks", "EMatchMakingServerResponse");
        }
        inline app::EMatchMakingServerResponse__Enum* create() {
            return il2cpp::create_object<app::EMatchMakingServerResponse__Enum>(get_class());
        }
    } // namespace EMatchMakingServerResponse__Enum
} // namespace app::classes::types
