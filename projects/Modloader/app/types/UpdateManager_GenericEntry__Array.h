#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_GenericEntry__Array {
        namespace {
            inline app::UpdateManager_GenericEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::UpdateManager_GenericEntry__Array__Class** type_info = &type_info_ref;
        inline app::UpdateManager_GenericEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager_GenericEntry__Array__Class>(type_info, "Moon.Driver", "UpdateManager+GenericEntry[]");
        }
        inline app::UpdateManager_GenericEntry__Array* create() {
            return il2cpp::create_object<app::UpdateManager_GenericEntry__Array>(get_class());
        }
    } // namespace UpdateManager_GenericEntry__Array
} // namespace app::classes::types
