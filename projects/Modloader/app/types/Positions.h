#pragma once
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/Positions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Positions {
        inline app::Positions__Class** type_info() {
            static app::Positions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Positions__Class**)(modloader::win::memory::resolve_rva(0x04733188));
            }
            return cache;
        }
        inline app::Positions__Class* get_class() {
            return il2cpp::get_class<app::Positions__Class>(type_info(), "System.Xml.Schema", "Positions");
        }
        inline app::Positions* create() {
            return il2cpp::create_object<app::Positions>(get_class());
        }
    } // namespace Positions
} // namespace app::classes::types
