#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisposerReplySink {
        inline app::DisposerReplySink__Class** type_info = (app::DisposerReplySink__Class**)(modloader::win::memory::resolve_rva(0x047344D8));
        inline app::DisposerReplySink__Class* get_class() {
            return il2cpp::get_class<app::DisposerReplySink__Class>(type_info, "System.Runtime.Remoting", "DisposerReplySink");
        }
        inline app::DisposerReplySink* create() {
            return il2cpp::create_object<app::DisposerReplySink>(get_class());
        }
    } // namespace DisposerReplySink
} // namespace app::classes::types
