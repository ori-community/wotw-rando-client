#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabIdfa__Class.h>
#include <Modloader/app/structs/PlayFabIdfa.h>

namespace app::classes::types {
    namespace PlayFabIdfa {
        inline app::PlayFabIdfa__Class** type_info = (app::PlayFabIdfa__Class**)(modloader::win::memory::resolve_rva(0x0471B998));
        inline app::PlayFabIdfa__Class* get_class() {
            return il2cpp::get_class<app::PlayFabIdfa__Class>(type_info, "PlayFab.Internal", "PlayFabIdfa");
        }
        inline app::PlayFabIdfa* create() {
            return il2cpp::create_object<app::PlayFabIdfa>(get_class());
        }
    } // namespace PlayFabIdfa
} // namespace app::classes::types
