#pragma once
#include <Modloader/app/structs/CSteamID__Array.h>
#include <Modloader/app/structs/CSteamID__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CSteamID__Array {
        inline app::CSteamID__Array__Class** type_info() {
            static app::CSteamID__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CSteamID__Array__Class**)(modloader::win::memory::resolve_rva(0x04798440));
            }
            return cache;
        }
        inline app::CSteamID__Array__Class* get_class() {
            return il2cpp::get_class<app::CSteamID__Array__Class>(type_info(), "Steamworks", "CSteamID[]");
        }
        inline app::CSteamID__Array* create() {
            return il2cpp::create_object<app::CSteamID__Array>(get_class());
        }
    } // namespace CSteamID__Array
} // namespace app::classes::types
