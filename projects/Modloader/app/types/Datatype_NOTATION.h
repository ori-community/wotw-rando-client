#pragma once
#include <Modloader/app/structs/Datatype_NOTATION.h>
#include <Modloader/app/structs/Datatype_NOTATION__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_NOTATION {
        inline app::Datatype_NOTATION__Class** type_info() {
            static app::Datatype_NOTATION__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_NOTATION__Class**)(modloader::win::memory::resolve_rva(0x0478F2A0));
            }
            return cache;
        }
        inline app::Datatype_NOTATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NOTATION__Class>(type_info(), "System.Xml.Schema", "Datatype_NOTATION");
        }
        inline app::Datatype_NOTATION* create() {
            return il2cpp::create_object<app::Datatype_NOTATION>(get_class());
        }
    } // namespace Datatype_NOTATION
} // namespace app::classes::types
