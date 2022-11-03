#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderDetector {
        inline app::UberShaderDetector__Class** type_info = (app::UberShaderDetector__Class**)(modloader::win::memory::resolve_rva(0x04703110));
        inline app::UberShaderDetector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDetector__Class>(type_info, "", "UberShaderDetector");
        }
        inline app::UberShaderDetector* create() {
            return il2cpp::create_object<app::UberShaderDetector>(get_class());
        }
    } // namespace UberShaderDetector
} // namespace app::classes::types
