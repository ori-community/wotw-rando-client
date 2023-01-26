#pragma once
#include <Modloader/app/structs/NonRandomizedStringEqualityComparer.h>
#include <Modloader/app/structs/NonRandomizedStringEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonRandomizedStringEqualityComparer {
        inline app::NonRandomizedStringEqualityComparer__Class** type_info() {
            static app::NonRandomizedStringEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonRandomizedStringEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04770D88));
            }
            return cache;
        }
        inline app::NonRandomizedStringEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::NonRandomizedStringEqualityComparer__Class>(type_info(), "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
        }
        inline app::NonRandomizedStringEqualityComparer* create() {
            return il2cpp::create_object<app::NonRandomizedStringEqualityComparer>(get_class());
        }
    } // namespace NonRandomizedStringEqualityComparer
} // namespace app::classes::types
