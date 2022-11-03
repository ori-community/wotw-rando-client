#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICloneable {
        inline app::ICloneable__Class** type_info = (app::ICloneable__Class**)(modloader::win::memory::resolve_rva(0x0471DD70));
        inline app::ICloneable__Class* get_class() {
            return il2cpp::get_class<app::ICloneable__Class>(type_info, "System", "ICloneable");
        }
    } // namespace ICloneable
} // namespace app::classes::types
