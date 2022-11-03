#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCDIK {
        inline app::CCDIK__Class** type_info = (app::CCDIK__Class**)(modloader::win::memory::resolve_rva(0x047332E8));
        inline app::CCDIK__Class* get_class() {
            return il2cpp::get_class<app::CCDIK__Class>(type_info, "RootMotion.FinalIK", "CCDIK");
        }
        inline app::CCDIK* create() {
            return il2cpp::create_object<app::CCDIK>(get_class());
        }
    } // namespace CCDIK
} // namespace app::classes::types
