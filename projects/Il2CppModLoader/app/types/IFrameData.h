#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrameData {
        inline app::IFrameData__Class** type_info = (app::IFrameData__Class**)(modloader::win::memory::resolve_rva(0x04774608));
        inline app::IFrameData__Class* get_class() {
            return il2cpp::get_class<app::IFrameData__Class>(type_info, "", "IFrameData");
        }
    } // namespace IFrameData
} // namespace app::classes::types
