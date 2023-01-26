#pragma once
#include <Modloader/app/structs/BinaryCrossAppDomainMap.h>
#include <Modloader/app/structs/BinaryCrossAppDomainMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainMap {
        inline app::BinaryCrossAppDomainMap__Class** type_info() {
            static app::BinaryCrossAppDomainMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryCrossAppDomainMap__Class**)(modloader::win::memory::resolve_rva(0x0476F098));
            }
            return cache;
        }
        inline app::BinaryCrossAppDomainMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainMap__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
        }
        inline app::BinaryCrossAppDomainMap* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainMap>(get_class());
        }
    } // namespace BinaryCrossAppDomainMap
} // namespace app::classes::types
