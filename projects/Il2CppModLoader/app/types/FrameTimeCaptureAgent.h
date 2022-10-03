#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameTimeCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameTimeCaptureAgent__Class** type_info;
        inline app::FrameTimeCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::FrameTimeCaptureAgent__Class>(type_info, "", "FrameTimeCaptureAgent");
        }
        inline app::FrameTimeCaptureAgent* create() {
            return il2cpp::create_object<app::FrameTimeCaptureAgent>(get_class());
        }
    } // namespace FrameTimeCaptureAgent
} // namespace app::classes::types
