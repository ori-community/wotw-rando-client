#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContractionComparer {
        inline app::ContractionComparer__Class** type_info = (app::ContractionComparer__Class**)(modloader::win::memory::resolve_rva(0x0476D478));
        inline app::ContractionComparer__Class* get_class() {
            return il2cpp::get_class<app::ContractionComparer__Class>(type_info, "Mono.Globalization.Unicode", "ContractionComparer");
        }
        inline app::ContractionComparer* create() {
            return il2cpp::create_object<app::ContractionComparer>(get_class());
        }
    } // namespace ContractionComparer
} // namespace app::classes::types
