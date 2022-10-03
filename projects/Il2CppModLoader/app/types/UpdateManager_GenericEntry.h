#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_GenericEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager_GenericEntry__Class** type_info;
        inline app::UpdateManager_GenericEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_GenericEntry__Class>(type_info, "Moon.Driver", "UpdateManager", "GenericEntry");
        }
        inline app::UpdateManager_GenericEntry* create() {
            return il2cpp::create_object<app::UpdateManager_GenericEntry>(get_class());
        }
        inline app::UpdateManager_GenericEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_GenericEntry__Array>(get_class(), size);
        }
    } // namespace UpdateManager_GenericEntry
} // namespace app::classes::types
