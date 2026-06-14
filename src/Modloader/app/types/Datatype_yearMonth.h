#pragma once
#include <Modloader/app/structs/Datatype_yearMonth.h>
#include <Modloader/app/structs/Datatype_yearMonth__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_yearMonth {
        inline app::Datatype_yearMonth__Class** type_info() {
            static app::Datatype_yearMonth__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_yearMonth__Class**)(modloader::win::memory::resolve_rva(0x04786AE0));
            }
            return cache;
        }
        inline app::Datatype_yearMonth__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonth__Class>(type_info(), "System.Xml.Schema", "Datatype_yearMonth");
        }
        inline app::Datatype_yearMonth* create() {
            return il2cpp::create_object<app::Datatype_yearMonth>(get_class());
        }
    } // namespace Datatype_yearMonth
} // namespace app::classes::types
