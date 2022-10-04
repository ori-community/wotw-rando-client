#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFrameData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFrameData__Class** type_info;
        inline app::IFrameData__Class* get_class() {
            return il2cpp::get_class<app::IFrameData__Class>(type_info, "", "IFrameData");
        }
    } // namespace IFrameData
} // namespace app::classes::types
