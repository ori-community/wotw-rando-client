#pragma once
#include <Modloader/app/structs/KeyValuePair_2_RuntimeSceneMetaDa_Mo_Timeli_Syst_SceneManagementSys_SceneLoadedSt___Ar__Cl.h>
#include <Modloader/app/structs/KeyValuePair_2_RuntimeSceneMetaDa_Mo_Timeli_Syste_SceneManagementSyst_SceneLoadedSta___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array {
        inline app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class** type_info() {
            static app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[RuntimeSceneMetaData,Moon.Timeline.Systems.SceneManagementSystem+SceneLoadedState][]");
        }
        inline app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array>(get_class());
        }
    } // namespace KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array
} // namespace app::classes::types
