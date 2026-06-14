#pragma once
#include <Modloader/app/structs/PlayerDataCaptureAgent.h>
#include <Modloader/app/structs/PlayerDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDataCaptureAgent {
        inline app::PlayerDataCaptureAgent__Class** type_info() {
            static app::PlayerDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0478B9A8));
            }
            return cache;
        }
        inline app::PlayerDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PlayerDataCaptureAgent__Class>(type_info(), "", "PlayerDataCaptureAgent");
        }
        inline app::PlayerDataCaptureAgent* create() {
            return il2cpp::create_object<app::PlayerDataCaptureAgent>(get_class());
        }
    } // namespace PlayerDataCaptureAgent
} // namespace app::classes::types
