#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadDispatcherPlaymode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MainThreadDispatcherPlaymode__Class** type_info;
        inline app::MainThreadDispatcherPlaymode__Class* get_class() {
            return il2cpp::get_class<app::MainThreadDispatcherPlaymode__Class>(type_info, "Moon.Network.Web", "MainThreadDispatcherPlaymode");
        }
        inline app::MainThreadDispatcherPlaymode* create() {
            return il2cpp::create_object<app::MainThreadDispatcherPlaymode>(get_class());
        }
    } // namespace MainThreadDispatcherPlaymode
} // namespace app::classes::types
