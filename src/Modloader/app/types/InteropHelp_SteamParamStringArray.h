#pragma once
#include <Modloader/app/structs/InteropHelp_SteamParamStringArray.h>
#include <Modloader/app/structs/InteropHelp_SteamParamStringArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteropHelp_SteamParamStringArray {
        inline app::InteropHelp_SteamParamStringArray__Class** type_info() {
            static app::InteropHelp_SteamParamStringArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteropHelp_SteamParamStringArray__Class**)(modloader::win::memory::resolve_rva(0x04796298));
            }
            return cache;
        }
        inline app::InteropHelp_SteamParamStringArray__Class* get_class() {
            return il2cpp::get_nested_class<app::InteropHelp_SteamParamStringArray__Class>(type_info(), "Steamworks", "InteropHelp", "SteamParamStringArray");
        }
        inline app::InteropHelp_SteamParamStringArray* create() {
            return il2cpp::create_object<app::InteropHelp_SteamParamStringArray>(get_class());
        }
    } // namespace InteropHelp_SteamParamStringArray
} // namespace app::classes::types
