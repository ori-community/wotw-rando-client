#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISceneRootPostEnableObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISceneRootPostEnableObserver__Class** type_info;
        inline app::ISceneRootPostEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPostEnableObserver__Class>(type_info, "", "ISceneRootPostEnableObserver");
        }
        inline app::ISceneRootPostEnableObserver* create() {
            return il2cpp::create_object<app::ISceneRootPostEnableObserver>(get_class());
        }
    } // namespace ISceneRootPostEnableObserver
} // namespace app::classes::types
