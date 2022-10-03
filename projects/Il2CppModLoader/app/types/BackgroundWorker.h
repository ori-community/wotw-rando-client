#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackgroundWorker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BackgroundWorker__Class** type_info;
        inline app::BackgroundWorker__Class* get_class() {
            return il2cpp::get_class<app::BackgroundWorker__Class>(type_info, "System.ComponentModel", "BackgroundWorker");
        }
        inline app::BackgroundWorker* create() {
            return il2cpp::create_object<app::BackgroundWorker>(get_class());
        }
    } // namespace BackgroundWorker
} // namespace app::classes::types
