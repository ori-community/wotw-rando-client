#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaptureAgentUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaptureAgentUtils__Class** type_info;
        inline app::CaptureAgentUtils__Class* get_class() {
            return il2cpp::get_class<app::CaptureAgentUtils__Class>(type_info, "", "CaptureAgentUtils");
        }
        inline app::CaptureAgentUtils* create() {
            return il2cpp::create_object<app::CaptureAgentUtils>(get_class());
        }
    } // namespace CaptureAgentUtils
} // namespace app::classes::types
