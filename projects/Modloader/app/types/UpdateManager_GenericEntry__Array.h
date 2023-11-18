#pragma once
#include <Modloader/app/structs/UpdateManager_GenericEntry__Array.h>
#include <Modloader/app/structs/UpdateManager_GenericEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_GenericEntry__Array {
        inline app::UpdateManager_GenericEntry__Array__Class** type_info() {
            static app::UpdateManager_GenericEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateManager_GenericEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateManager_GenericEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager_GenericEntry__Array__Class>(type_info(), "Moon.Driver", "UpdateManager+GenericEntry[]");
        }
        inline app::UpdateManager_GenericEntry__Array* create() {
            return il2cpp::create_object<app::UpdateManager_GenericEntry__Array>(get_class());
        }
    } // namespace UpdateManager_GenericEntry__Array
} // namespace app::classes::types
