#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_float__Class.h>
#include <Modloader/app/structs/Datatype_float.h>

namespace app::classes::types {
    namespace Datatype_float {
        inline app::Datatype_float__Class** type_info = (app::Datatype_float__Class**)(modloader::win::memory::resolve_rva(0x0475A268));
        inline app::Datatype_float__Class* get_class() {
            return il2cpp::get_class<app::Datatype_float__Class>(type_info, "System.Xml.Schema", "Datatype_float");
        }
        inline app::Datatype_float* create() {
            return il2cpp::create_object<app::Datatype_float>(get_class());
        }
    } // namespace Datatype_float
} // namespace app::classes::types
