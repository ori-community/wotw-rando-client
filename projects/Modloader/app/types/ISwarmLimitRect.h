#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISwarmLimitRect__Class.h>

namespace app::classes::types {
    namespace ISwarmLimitRect {
        inline app::ISwarmLimitRect__Class** type_info = (app::ISwarmLimitRect__Class**)(modloader::win::memory::resolve_rva(0x04756470));
        inline app::ISwarmLimitRect__Class* get_class() {
            return il2cpp::get_class<app::ISwarmLimitRect__Class>(type_info, "", "ISwarmLimitRect");
        }
    } // namespace ISwarmLimitRect
} // namespace app::classes::types
