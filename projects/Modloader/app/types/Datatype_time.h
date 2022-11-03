#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_time {
        inline app::Datatype_time__Class** type_info = (app::Datatype_time__Class**)(modloader::win::memory::resolve_rva(0x0470A570));
        inline app::Datatype_time__Class* get_class() {
            return il2cpp::get_class<app::Datatype_time__Class>(type_info, "System.Xml.Schema", "Datatype_time");
        }
        inline app::Datatype_time* create() {
            return il2cpp::create_object<app::Datatype_time>(get_class());
        }
    } // namespace Datatype_time
} // namespace app::classes::types
