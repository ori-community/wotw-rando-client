#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_month {
        inline app::Datatype_month__Class** type_info = (app::Datatype_month__Class**)(modloader::win::memory::resolve_rva(0x0471E1E0));
        inline app::Datatype_month__Class* get_class() {
            return il2cpp::get_class<app::Datatype_month__Class>(type_info, "System.Xml.Schema", "Datatype_month");
        }
        inline app::Datatype_month* create() {
            return il2cpp::create_object<app::Datatype_month>(get_class());
        }
    } // namespace Datatype_month
} // namespace app::classes::types
