#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitBeforeIntroLogosOperation {
        inline app::WaitBeforeIntroLogosOperation__Class** type_info = (app::WaitBeforeIntroLogosOperation__Class**)(modloader::win::memory::resolve_rva(0x04797990));
        inline app::WaitBeforeIntroLogosOperation__Class* get_class() {
            return il2cpp::get_class<app::WaitBeforeIntroLogosOperation__Class>(type_info, "frameworks.loading.Prewarmers", "WaitBeforeIntroLogosOperation");
        }
        inline app::WaitBeforeIntroLogosOperation* create() {
            return il2cpp::create_object<app::WaitBeforeIntroLogosOperation>(get_class());
        }
    } // namespace WaitBeforeIntroLogosOperation
} // namespace app::classes::types
