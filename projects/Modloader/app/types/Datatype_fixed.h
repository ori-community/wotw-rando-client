#pragma once
#include <Modloader/app/structs/Datatype_fixed.h>
#include <Modloader/app/structs/Datatype_fixed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_fixed {
        inline app::Datatype_fixed__Class** type_info() {
            static app::Datatype_fixed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_fixed__Class**)(modloader::win::memory::resolve_rva(0x04759CC8));
            }
            return cache;
        }
        inline app::Datatype_fixed__Class* get_class() {
            return il2cpp::get_class<app::Datatype_fixed__Class>(type_info(), "System.Xml.Schema", "Datatype_fixed");
        }
        inline app::Datatype_fixed* create() {
            return il2cpp::create_object<app::Datatype_fixed>(get_class());
        }
    } // namespace Datatype_fixed
} // namespace app::classes::types
