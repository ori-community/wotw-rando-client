#pragma once
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/MarshalByRefObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarshalByRefObject {
        inline app::MarshalByRefObject__Class** type_info() {
            static app::MarshalByRefObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MarshalByRefObject__Class**)(modloader::win::memory::resolve_rva(0x04706818));
            }
            return cache;
        }
        inline app::MarshalByRefObject__Class* get_class() {
            return il2cpp::get_class<app::MarshalByRefObject__Class>(type_info(), "System", "MarshalByRefObject");
        }
        inline app::MarshalByRefObject* create() {
            return il2cpp::create_object<app::MarshalByRefObject>(get_class());
        }
    } // namespace MarshalByRefObject
} // namespace app::classes::types
