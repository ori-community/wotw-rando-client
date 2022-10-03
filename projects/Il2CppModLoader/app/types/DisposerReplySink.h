#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisposerReplySink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DisposerReplySink__Class** type_info;
        inline app::DisposerReplySink__Class* get_class() {
            return il2cpp::get_class<app::DisposerReplySink__Class>(type_info, "System.Runtime.Remoting", "DisposerReplySink");
        }
        inline app::DisposerReplySink* create() {
            return il2cpp::create_object<app::DisposerReplySink>(get_class());
        }
    } // namespace DisposerReplySink
} // namespace app::classes::types
