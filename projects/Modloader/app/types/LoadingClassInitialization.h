#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadingClassInitialization {
        inline app::LoadingClassInitialization__Class** type_info = (app::LoadingClassInitialization__Class**)(modloader::win::memory::resolve_rva(0x04787D60));
        inline app::LoadingClassInitialization__Class* get_class() {
            return il2cpp::get_class<app::LoadingClassInitialization__Class>(type_info, "Moon.loading", "LoadingClassInitialization");
        }
        inline app::LoadingClassInitialization* create() {
            return il2cpp::create_object<app::LoadingClassInitialization>(get_class());
        }
    } // namespace LoadingClassInitialization
} // namespace app::classes::types
