#pragma once
#include <Modloader/app/structs/Datatype_byte.h>
#include <Modloader/app/structs/Datatype_byte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_byte {
        inline app::Datatype_byte__Class** type_info() {
            static app::Datatype_byte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_byte__Class**)(modloader::win::memory::resolve_rva(0x04763790));
            }
            return cache;
        }
        inline app::Datatype_byte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_byte__Class>(type_info(), "System.Xml.Schema", "Datatype_byte");
        }
        inline app::Datatype_byte* create() {
            return il2cpp::create_object<app::Datatype_byte>(get_class());
        }
    } // namespace Datatype_byte
} // namespace app::classes::types
