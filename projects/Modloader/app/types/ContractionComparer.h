#pragma once
#include <Modloader/app/structs/ContractionComparer.h>
#include <Modloader/app/structs/ContractionComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContractionComparer {
        inline app::ContractionComparer__Class** type_info() {
            static app::ContractionComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContractionComparer__Class**)(modloader::win::memory::resolve_rva(0x0476D478));
            }
            return cache;
        }
        inline app::ContractionComparer__Class* get_class() {
            return il2cpp::get_class<app::ContractionComparer__Class>(type_info(), "Mono.Globalization.Unicode", "ContractionComparer");
        }
        inline app::ContractionComparer* create() {
            return il2cpp::create_object<app::ContractionComparer>(get_class());
        }
    } // namespace ContractionComparer
} // namespace app::classes::types
