#pragma once
#include <Modloader/app/structs/Datatype_unsignedByte.h>
#include <Modloader/app/structs/Datatype_unsignedByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedByte {
        inline app::Datatype_unsignedByte__Class** type_info() {
            static app::Datatype_unsignedByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_unsignedByte__Class**)(modloader::win::memory::resolve_rva(0x04747390));
            }
            return cache;
        }
        inline app::Datatype_unsignedByte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedByte__Class>(type_info(), "System.Xml.Schema", "Datatype_unsignedByte");
        }
        inline app::Datatype_unsignedByte* create() {
            return il2cpp::create_object<app::Datatype_unsignedByte>(get_class());
        }
    } // namespace Datatype_unsignedByte
} // namespace app::classes::types
