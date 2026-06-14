#pragma once
#include <Modloader/app/structs/ObjRefSurrogate.h>
#include <Modloader/app/structs/ObjRefSurrogate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjRefSurrogate {
        inline app::ObjRefSurrogate__Class** type_info() {
            static app::ObjRefSurrogate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjRefSurrogate__Class**)(modloader::win::memory::resolve_rva(0x04713E80));
            }
            return cache;
        }
        inline app::ObjRefSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ObjRefSurrogate__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ObjRefSurrogate");
        }
        inline app::ObjRefSurrogate* create() {
            return il2cpp::create_object<app::ObjRefSurrogate>(get_class());
        }
    } // namespace ObjRefSurrogate
} // namespace app::classes::types
