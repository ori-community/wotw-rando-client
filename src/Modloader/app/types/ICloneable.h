#pragma once
#include <Modloader/app/structs/ICloneable.h>
#include <Modloader/app/structs/ICloneable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICloneable {
        inline app::ICloneable__Class** type_info() {
            static app::ICloneable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICloneable__Class**)(modloader::win::memory::resolve_rva(0x0471DD70));
            }
            return cache;
        }
        inline app::ICloneable__Class* get_class() {
            return il2cpp::get_class<app::ICloneable__Class>(type_info(), "System", "ICloneable");
        }
    } // namespace ICloneable
} // namespace app::classes::types
