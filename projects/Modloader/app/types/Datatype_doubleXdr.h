#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_doubleXdr {
        inline app::Datatype_doubleXdr__Class** type_info = (app::Datatype_doubleXdr__Class**)(modloader::win::memory::resolve_rva(0x04761280));
        inline app::Datatype_doubleXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_doubleXdr__Class>(type_info, "System.Xml.Schema", "Datatype_doubleXdr");
        }
        inline app::Datatype_doubleXdr* create() {
            return il2cpp::create_object<app::Datatype_doubleXdr>(get_class());
        }
    } // namespace Datatype_doubleXdr
} // namespace app::classes::types
