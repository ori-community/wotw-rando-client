#pragma once
#include <Modloader/app/structs/CSteamAPIContext.h>
#include <Modloader/app/structs/CSteamAPIContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CSteamAPIContext {
        inline app::CSteamAPIContext__Class** type_info() {
            static app::CSteamAPIContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CSteamAPIContext__Class**)(modloader::win::memory::resolve_rva(0x0476BC40));
            }
            return cache;
        }
        inline app::CSteamAPIContext__Class* get_class() {
            return il2cpp::get_class<app::CSteamAPIContext__Class>(type_info(), "Steamworks", "CSteamAPIContext");
        }
        inline app::CSteamAPIContext* create() {
            return il2cpp::create_object<app::CSteamAPIContext>(get_class());
        }
    } // namespace CSteamAPIContext
} // namespace app::classes::types
