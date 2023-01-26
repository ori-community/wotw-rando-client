#pragma once
#include <Modloader/app/structs/EmptyResponse_2.h>
#include <Modloader/app/structs/EmptyResponse_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse_2 {
        inline app::EmptyResponse_2__Class** type_info() {
            static app::EmptyResponse_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyResponse_2__Class**)(modloader::win::memory::resolve_rva(0x0474A4A8));
            }
            return cache;
        }
        inline app::EmptyResponse_2__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_2__Class>(type_info(), "PlayFab.MultiplayerModels", "EmptyResponse");
        }
        inline app::EmptyResponse_2* create() {
            return il2cpp::create_object<app::EmptyResponse_2>(get_class());
        }
    } // namespace EmptyResponse_2
} // namespace app::classes::types
