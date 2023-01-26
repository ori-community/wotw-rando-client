#pragma once
#include <Modloader/app/structs/Datatype_hexBinary.h>
#include <Modloader/app/structs/Datatype_hexBinary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_hexBinary {
        inline app::Datatype_hexBinary__Class** type_info() {
            static app::Datatype_hexBinary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_hexBinary__Class**)(modloader::win::memory::resolve_rva(0x0473C990));
            }
            return cache;
        }
        inline app::Datatype_hexBinary__Class* get_class() {
            return il2cpp::get_class<app::Datatype_hexBinary__Class>(type_info(), "System.Xml.Schema", "Datatype_hexBinary");
        }
        inline app::Datatype_hexBinary* create() {
            return il2cpp::create_object<app::Datatype_hexBinary>(get_class());
        }
    } // namespace Datatype_hexBinary
} // namespace app::classes::types
