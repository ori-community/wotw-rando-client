#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDataCaptureAgent__Class.h>
#include <Modloader/app/structs/PlayerDataCaptureAgent.h>

namespace app::classes::types {
    namespace PlayerDataCaptureAgent {
        inline app::PlayerDataCaptureAgent__Class** type_info = (app::PlayerDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0478B9A8));
        inline app::PlayerDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PlayerDataCaptureAgent__Class>(type_info, "", "PlayerDataCaptureAgent");
        }
        inline app::PlayerDataCaptureAgent* create() {
            return il2cpp::create_object<app::PlayerDataCaptureAgent>(get_class());
        }
    } // namespace PlayerDataCaptureAgent
} // namespace app::classes::types
