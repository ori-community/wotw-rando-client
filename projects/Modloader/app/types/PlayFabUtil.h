#pragma once
#include <Modloader/app/structs/PlayFabUtil.h>
#include <Modloader/app/structs/PlayFabUtil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabUtil {
        inline app::PlayFabUtil__Class** type_info() {
            static app::PlayFabUtil__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabUtil__Class**)(modloader::win::memory::resolve_rva(0x0471F3B0));
            }
            return cache;
        }
        inline app::PlayFabUtil__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUtil__Class>(type_info(), "PlayFab.Internal", "PlayFabUtil");
        }
        inline app::PlayFabUtil* create() {
            return il2cpp::create_object<app::PlayFabUtil>(get_class());
        }
    } // namespace PlayFabUtil
} // namespace app::classes::types
