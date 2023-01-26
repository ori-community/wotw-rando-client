#pragma once
#include <Modloader/app/structs/Bits.h>
#include <Modloader/app/structs/Bits__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bits {
        inline app::Bits__Class** type_info() {
            static app::Bits__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Bits__Class**)(modloader::win::memory::resolve_rva(0x0471CF78));
            }
            return cache;
        }
        inline app::Bits__Class* get_class() {
            return il2cpp::get_class<app::Bits__Class>(type_info(), "System.Xml", "Bits");
        }
        inline app::Bits* create() {
            return il2cpp::create_object<app::Bits>(get_class());
        }
    } // namespace Bits
} // namespace app::classes::types
