#pragma once
#include <Modloader/app/structs/CaptureAgentUtils.h>
#include <Modloader/app/structs/CaptureAgentUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaptureAgentUtils {
        inline app::CaptureAgentUtils__Class** type_info() {
            static app::CaptureAgentUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaptureAgentUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CDF0));
            }
            return cache;
        }
        inline app::CaptureAgentUtils__Class* get_class() {
            return il2cpp::get_class<app::CaptureAgentUtils__Class>(type_info(), "", "CaptureAgentUtils");
        }
        inline app::CaptureAgentUtils* create() {
            return il2cpp::create_object<app::CaptureAgentUtils>(get_class());
        }
    } // namespace CaptureAgentUtils
} // namespace app::classes::types
