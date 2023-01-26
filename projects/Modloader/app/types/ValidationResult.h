#pragma once
#include <Modloader/app/structs/ValidationResult.h>
#include <Modloader/app/structs/ValidationResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidationResult {
        inline app::ValidationResult__Class** type_info() {
            static app::ValidationResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidationResult__Class**)(modloader::win::memory::resolve_rva(0x04719170));
            }
            return cache;
        }
        inline app::ValidationResult__Class* get_class() {
            return il2cpp::get_class<app::ValidationResult__Class>(type_info(), "Mono.Security.Interface", "ValidationResult");
        }
        inline app::ValidationResult* create() {
            return il2cpp::create_object<app::ValidationResult>(get_class());
        }
    } // namespace ValidationResult
} // namespace app::classes::types
