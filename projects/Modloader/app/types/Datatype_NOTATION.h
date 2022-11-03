#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_NOTATION {
        inline app::Datatype_NOTATION__Class** type_info = (app::Datatype_NOTATION__Class**)(modloader::win::memory::resolve_rva(0x0478F2A0));
        inline app::Datatype_NOTATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NOTATION__Class>(type_info, "System.Xml.Schema", "Datatype_NOTATION");
        }
        inline app::Datatype_NOTATION* create() {
            return il2cpp::create_object<app::Datatype_NOTATION>(get_class());
        }
    } // namespace Datatype_NOTATION
} // namespace app::classes::types
