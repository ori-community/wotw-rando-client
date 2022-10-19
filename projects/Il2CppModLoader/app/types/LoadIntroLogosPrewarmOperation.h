#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadIntroLogosPrewarmOperation {
        inline app::LoadIntroLogosPrewarmOperation__Class** type_info = (app::LoadIntroLogosPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0472F648));
        inline app::LoadIntroLogosPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::LoadIntroLogosPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "LoadIntroLogosPrewarmOperation");
        }
        inline app::LoadIntroLogosPrewarmOperation* create() {
            return il2cpp::create_object<app::LoadIntroLogosPrewarmOperation>(get_class());
        }
    } // namespace LoadIntroLogosPrewarmOperation
} // namespace app::classes::types
