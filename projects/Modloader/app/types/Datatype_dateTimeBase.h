#pragma once
#include <Modloader/app/structs/Datatype_dateTimeBase.h>
#include <Modloader/app/structs/Datatype_dateTimeBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTimeBase {
        inline app::Datatype_dateTimeBase__Class** type_info() {
            static app::Datatype_dateTimeBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_dateTimeBase__Class**)(modloader::win::memory::resolve_rva(0x0475F2F8));
            }
            return cache;
        }
        inline app::Datatype_dateTimeBase__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeBase__Class>(type_info(), "System.Xml.Schema", "Datatype_dateTimeBase");
        }
        inline app::Datatype_dateTimeBase* create() {
            return il2cpp::create_object<app::Datatype_dateTimeBase>(get_class());
        }
    } // namespace Datatype_dateTimeBase
} // namespace app::classes::types
