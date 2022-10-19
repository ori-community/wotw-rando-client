#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioPrewarmOperation {
        inline app::AudioPrewarmOperation__Class** type_info = (app::AudioPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04765690));
        inline app::AudioPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::AudioPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "AudioPrewarmOperation");
        }
        inline app::AudioPrewarmOperation* create() {
            return il2cpp::create_object<app::AudioPrewarmOperation>(get_class());
        }
    } // namespace AudioPrewarmOperation
} // namespace app::classes::types
