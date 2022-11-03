#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CriticalFinalizerObject {
        namespace {
            inline app::CriticalFinalizerObject__Class* type_info_ref = nullptr;
        }
        inline app::CriticalFinalizerObject__Class** type_info = &type_info_ref;
        inline app::CriticalFinalizerObject__Class* get_class() {
            return il2cpp::get_class<app::CriticalFinalizerObject__Class>(type_info, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
        }
        inline app::CriticalFinalizerObject* create() {
            return il2cpp::create_object<app::CriticalFinalizerObject>(get_class());
        }
    } // namespace CriticalFinalizerObject
} // namespace app::classes::types
