#pragma once
#include <Modloader/app/structs/PlayFabIdfa.h>
#include <Modloader/app/structs/PlayFabIdfa__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabIdfa {
        inline app::PlayFabIdfa__Class** type_info() {
            static app::PlayFabIdfa__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabIdfa__Class**)(modloader::win::memory::resolve_rva(0x0471B998));
            }
            return cache;
        }
        inline app::PlayFabIdfa__Class* get_class() {
            return il2cpp::get_class<app::PlayFabIdfa__Class>(type_info(), "PlayFab.Internal", "PlayFabIdfa");
        }
        inline app::PlayFabIdfa* create() {
            return il2cpp::create_object<app::PlayFabIdfa>(get_class());
        }
    } // namespace PlayFabIdfa
} // namespace app::classes::types
