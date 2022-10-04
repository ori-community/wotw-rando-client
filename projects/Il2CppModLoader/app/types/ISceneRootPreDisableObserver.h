#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISceneRootPreDisableObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISceneRootPreDisableObserver__Class** type_info;
        inline app::ISceneRootPreDisableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPreDisableObserver__Class>(type_info, "", "ISceneRootPreDisableObserver");
        }
        inline app::ISceneRootPreDisableObserver* create() {
            return il2cpp::create_object<app::ISceneRootPreDisableObserver>(get_class());
        }
    } // namespace ISceneRootPreDisableObserver
} // namespace app::classes::types
