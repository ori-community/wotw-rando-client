#pragma once
#include <Modloader/app/structs/SeinHealthVisualMinNormalizedProvider.h>
#include <Modloader/app/structs/SeinHealthVisualMinNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMinNormalizedProvider {
        inline app::SeinHealthVisualMinNormalizedProvider__Class** type_info() {
            static app::SeinHealthVisualMinNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthVisualMinNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthVisualMinNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMinNormalizedProvider__Class>(type_info(), "", "SeinHealthVisualMinNormalizedProvider");
        }
        inline app::SeinHealthVisualMinNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMinNormalizedProvider>(get_class());
        }
    } // namespace SeinHealthVisualMinNormalizedProvider
} // namespace app::classes::types
