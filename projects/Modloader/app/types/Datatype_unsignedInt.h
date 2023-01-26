#pragma once
#include <Modloader/app/structs/Datatype_unsignedInt.h>
#include <Modloader/app/structs/Datatype_unsignedInt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_unsignedInt {
        inline app::Datatype_unsignedInt__Class** type_info() {
            static app::Datatype_unsignedInt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_unsignedInt__Class**)(modloader::win::memory::resolve_rva(0x04745760));
            }
            return cache;
        }
        inline app::Datatype_unsignedInt__Class* get_class() {
            return il2cpp::get_class<app::Datatype_unsignedInt__Class>(type_info(), "System.Xml.Schema", "Datatype_unsignedInt");
        }
        inline app::Datatype_unsignedInt* create() {
            return il2cpp::create_object<app::Datatype_unsignedInt>(get_class());
        }
    } // namespace Datatype_unsignedInt
} // namespace app::classes::types
