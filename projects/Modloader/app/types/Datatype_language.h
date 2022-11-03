#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_language {
        inline app::Datatype_language__Class** type_info = (app::Datatype_language__Class**)(modloader::win::memory::resolve_rva(0x04719798));
        inline app::Datatype_language__Class* get_class() {
            return il2cpp::get_class<app::Datatype_language__Class>(type_info, "System.Xml.Schema", "Datatype_language");
        }
        inline app::Datatype_language* create() {
            return il2cpp::create_object<app::Datatype_language>(get_class());
        }
    } // namespace Datatype_language
} // namespace app::classes::types
