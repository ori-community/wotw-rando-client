#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainMap {
        inline app::BinaryCrossAppDomainMap__Class** type_info = (app::BinaryCrossAppDomainMap__Class**)(modloader::win::memory::resolve_rva(0x0476F098));
        inline app::BinaryCrossAppDomainMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainMap__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
        }
        inline app::BinaryCrossAppDomainMap* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainMap>(get_class());
        }
    } // namespace BinaryCrossAppDomainMap
} // namespace app::classes::types
