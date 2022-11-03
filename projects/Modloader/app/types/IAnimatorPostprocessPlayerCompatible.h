#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessPlayerCompatible {
        inline app::IAnimatorPostprocessPlayerCompatible__Class** type_info = (app::IAnimatorPostprocessPlayerCompatible__Class**)(modloader::win::memory::resolve_rva(0x04744390));
        inline app::IAnimatorPostprocessPlayerCompatible__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessPlayerCompatible__Class>(type_info, "Moon.Animation", "IAnimatorPostprocessPlayerCompatible");
        }
    } // namespace IAnimatorPostprocessPlayerCompatible
} // namespace app::classes::types
