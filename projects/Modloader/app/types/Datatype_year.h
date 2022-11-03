#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_year {
        inline app::Datatype_year__Class** type_info = (app::Datatype_year__Class**)(modloader::win::memory::resolve_rva(0x047652A0));
        inline app::Datatype_year__Class* get_class() {
            return il2cpp::get_class<app::Datatype_year__Class>(type_info, "System.Xml.Schema", "Datatype_year");
        }
        inline app::Datatype_year* create() {
            return il2cpp::create_object<app::Datatype_year>(get_class());
        }
    } // namespace Datatype_year
} // namespace app::classes::types
