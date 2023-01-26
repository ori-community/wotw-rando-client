#pragma once
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/ObjRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjRef {
        inline app::ObjRef__Class** type_info() {
            static app::ObjRef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjRef__Class**)(modloader::win::memory::resolve_rva(0x04710070));
            }
            return cache;
        }
        inline app::ObjRef__Class* get_class() {
            return il2cpp::get_class<app::ObjRef__Class>(type_info(), "System.Runtime.Remoting", "ObjRef");
        }
        inline app::ObjRef* create() {
            return il2cpp::create_object<app::ObjRef>(get_class());
        }
    } // namespace ObjRef
} // namespace app::classes::types
