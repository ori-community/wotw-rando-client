#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INewFrameCaptureAgent {
        inline app::INewFrameCaptureAgent__Class** type_info = (app::INewFrameCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0474F838));
        inline app::INewFrameCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::INewFrameCaptureAgent__Class>(type_info, "", "INewFrameCaptureAgent");
        }
    } // namespace INewFrameCaptureAgent
} // namespace app::classes::types
