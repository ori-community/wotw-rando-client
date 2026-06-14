#pragma once
#include <Modloader/app/structs/ICloseEx.h>
#include <Modloader/app/structs/ICloseEx__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICloseEx {
        inline app::ICloseEx__Class** type_info() {
            static app::ICloseEx__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICloseEx__Class**)(modloader::win::memory::resolve_rva(0x04739788));
            }
            return cache;
        }
        inline app::ICloseEx__Class* get_class() {
            return il2cpp::get_class<app::ICloseEx__Class>(type_info(), "System.Net", "ICloseEx");
        }
    } // namespace ICloseEx
} // namespace app::classes::types
