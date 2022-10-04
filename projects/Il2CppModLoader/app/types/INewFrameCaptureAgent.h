#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INewFrameCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INewFrameCaptureAgent__Class** type_info;
        inline app::INewFrameCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::INewFrameCaptureAgent__Class>(type_info, "", "INewFrameCaptureAgent");
        }
    } // namespace INewFrameCaptureAgent
} // namespace app::classes::types
