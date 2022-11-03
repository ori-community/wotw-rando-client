#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidationResult {
        inline app::ValidationResult__Class** type_info = (app::ValidationResult__Class**)(modloader::win::memory::resolve_rva(0x04719170));
        inline app::ValidationResult__Class* get_class() {
            return il2cpp::get_class<app::ValidationResult__Class>(type_info, "Mono.Security.Interface", "ValidationResult");
        }
        inline app::ValidationResult* create() {
            return il2cpp::create_object<app::ValidationResult>(get_class());
        }
    } // namespace ValidationResult
} // namespace app::classes::types
