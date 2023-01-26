#pragma once
#include <Modloader/app/structs/ISwarmLimitRect.h>
#include <Modloader/app/structs/ISwarmLimitRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwarmLimitRect {
        inline app::ISwarmLimitRect__Class** type_info() {
            static app::ISwarmLimitRect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISwarmLimitRect__Class**)(modloader::win::memory::resolve_rva(0x04756470));
            }
            return cache;
        }
        inline app::ISwarmLimitRect__Class* get_class() {
            return il2cpp::get_class<app::ISwarmLimitRect__Class>(type_info(), "", "ISwarmLimitRect");
        }
    } // namespace ISwarmLimitRect
} // namespace app::classes::types
