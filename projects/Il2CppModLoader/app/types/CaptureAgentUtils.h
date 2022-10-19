#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CaptureAgentUtils {
        inline app::CaptureAgentUtils__Class** type_info = (app::CaptureAgentUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CDF0));
        inline app::CaptureAgentUtils__Class* get_class() {
            return il2cpp::get_class<app::CaptureAgentUtils__Class>(type_info, "", "CaptureAgentUtils");
        }
        inline app::CaptureAgentUtils* create() {
            return il2cpp::create_object<app::CaptureAgentUtils>(get_class());
        }
    } // namespace CaptureAgentUtils
} // namespace app::classes::types
