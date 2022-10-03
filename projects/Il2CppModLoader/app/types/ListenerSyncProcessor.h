#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListenerSyncProcessor__Class** type_info;
        inline app::ListenerSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::ListenerSyncProcessor__Class>(type_info, "Moon.Wwise", "ListenerSyncProcessor");
        }
        inline app::ListenerSyncProcessor* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor>(get_class());
        }
    } // namespace ListenerSyncProcessor
} // namespace app::classes::types
