#pragma once
#include <Modloader/app/structs/Datatype_QNameXdr.h>
#include <Modloader/app/structs/Datatype_QNameXdr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_QNameXdr {
        inline app::Datatype_QNameXdr__Class** type_info() {
            static app::Datatype_QNameXdr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_QNameXdr__Class**)(modloader::win::memory::resolve_rva(0x0478CC30));
            }
            return cache;
        }
        inline app::Datatype_QNameXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_QNameXdr__Class>(type_info(), "System.Xml.Schema", "Datatype_QNameXdr");
        }
        inline app::Datatype_QNameXdr* create() {
            return il2cpp::create_object<app::Datatype_QNameXdr>(get_class());
        }
    } // namespace Datatype_QNameXdr
} // namespace app::classes::types
