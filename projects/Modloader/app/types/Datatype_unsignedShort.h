#pragma once
#include <Modloader/app/structs/Datatype_unsignedShort.h>
#include <Modloader/app/structs/Datatype_unsignedShort__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedShort {
        inline app::Datatype_unsignedShort__Class** type_info() {
            static app::Datatype_unsignedShort__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_unsignedShort__Class**)(modloader::win::memory::resolve_rva(0x04707878));
            }
            return cache;
        }
        inline app::Datatype_unsignedShort__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedShort__Class>(type_info(), "System.Xml.Schema", "Datatype_unsignedShort");
        }
        inline app::Datatype_unsignedShort* create() {
            return il2cpp::create_object<app::Datatype_unsignedShort>(get_class());
        }
    } // namespace Datatype_unsignedShort
} // namespace app::classes::types
