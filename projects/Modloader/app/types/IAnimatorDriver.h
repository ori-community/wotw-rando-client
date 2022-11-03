#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAnimatorDriver {
        inline app::IAnimatorDriver__Class** type_info = (app::IAnimatorDriver__Class**)(modloader::win::memory::resolve_rva(0x04767DA0));
        inline app::IAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorDriver__Class>(type_info, "", "IAnimatorDriver");
        }
    } // namespace IAnimatorDriver
} // namespace app::classes::types
