#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_double__Class.h>
#include <Modloader/app/structs/Datatype_double.h>

namespace app::classes::types {
    namespace Datatype_double {
        inline app::Datatype_double__Class** type_info = (app::Datatype_double__Class**)(modloader::win::memory::resolve_rva(0x0475C4F0));
        inline app::Datatype_double__Class* get_class() {
            return il2cpp::get_class<app::Datatype_double__Class>(type_info, "System.Xml.Schema", "Datatype_double");
        }
        inline app::Datatype_double* create() {
            return il2cpp::create_object<app::Datatype_double>(get_class());
        }
    } // namespace Datatype_double
} // namespace app::classes::types
