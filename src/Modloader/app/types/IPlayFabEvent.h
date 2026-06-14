#pragma once
#include <Modloader/app/structs/IPlayFabEvent.h>
#include <Modloader/app/structs/IPlayFabEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEvent {
        inline app::IPlayFabEvent__Class** type_info() {
            static app::IPlayFabEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPlayFabEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPlayFabEvent__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEvent__Class>(type_info(), "PlayFab", "IPlayFabEvent");
        }
    } // namespace IPlayFabEvent
} // namespace app::classes::types
