#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_yearMonth {
        inline app::Datatype_yearMonth__Class** type_info = (app::Datatype_yearMonth__Class**)(modloader::win::memory::resolve_rva(0x04786AE0));
        inline app::Datatype_yearMonth__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonth__Class>(type_info, "System.Xml.Schema", "Datatype_yearMonth");
        }
        inline app::Datatype_yearMonth* create() {
            return il2cpp::create_object<app::Datatype_yearMonth>(get_class());
        }
    } // namespace Datatype_yearMonth
} // namespace app::classes::types
