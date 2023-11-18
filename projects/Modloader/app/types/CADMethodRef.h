#pragma once
#include <Modloader/app/structs/CADMethodRef.h>
#include <Modloader/app/structs/CADMethodRef__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADMethodRef {
        inline app::CADMethodRef__Class** type_info() {
            static app::CADMethodRef__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CADMethodRef__Class**)(modloader::win::memory::resolve_rva(0x0475E580));
            }
            return cache;
        }
        inline app::CADMethodRef__Class* get_class() {
            return il2cpp::get_class<app::CADMethodRef__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CADMethodRef");
        }
        inline app::CADMethodRef* create() {
            return il2cpp::create_object<app::CADMethodRef>(get_class());
        }
    } // namespace CADMethodRef
} // namespace app::classes::types
