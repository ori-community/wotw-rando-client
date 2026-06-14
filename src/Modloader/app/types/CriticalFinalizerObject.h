#pragma once
#include <Modloader/app/structs/CriticalFinalizerObject.h>
#include <Modloader/app/structs/CriticalFinalizerObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CriticalFinalizerObject {
        inline app::CriticalFinalizerObject__Class** type_info() {
            static app::CriticalFinalizerObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CriticalFinalizerObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CriticalFinalizerObject__Class* get_class() {
            return il2cpp::get_class<app::CriticalFinalizerObject__Class>(type_info(), "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
        }
        inline app::CriticalFinalizerObject* create() {
            return il2cpp::create_object<app::CriticalFinalizerObject>(get_class());
        }
    } // namespace CriticalFinalizerObject
} // namespace app::classes::types
