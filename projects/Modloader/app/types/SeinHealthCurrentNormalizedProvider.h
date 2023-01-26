#pragma once
#include <Modloader/app/structs/SeinHealthCurrentNormalizedProvider.h>
#include <Modloader/app/structs/SeinHealthCurrentNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthCurrentNormalizedProvider {
        inline app::SeinHealthCurrentNormalizedProvider__Class** type_info() {
            static app::SeinHealthCurrentNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthCurrentNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthCurrentNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthCurrentNormalizedProvider__Class>(type_info(), "", "SeinHealthCurrentNormalizedProvider");
        }
        inline app::SeinHealthCurrentNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinHealthCurrentNormalizedProvider>(get_class());
        }
    } // namespace SeinHealthCurrentNormalizedProvider
} // namespace app::classes::types
