#pragma once
#include <Modloader/app/structs/CADObjRef.h>
#include <Modloader/app/structs/CADObjRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADObjRef {
        inline app::CADObjRef__Class** type_info() {
            static app::CADObjRef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CADObjRef__Class**)(modloader::win::memory::resolve_rva(0x0471CF58));
            }
            return cache;
        }
        inline app::CADObjRef__Class* get_class() {
            return il2cpp::get_class<app::CADObjRef__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CADObjRef");
        }
        inline app::CADObjRef* create() {
            return il2cpp::create_object<app::CADObjRef>(get_class());
        }
    } // namespace CADObjRef
} // namespace app::classes::types
