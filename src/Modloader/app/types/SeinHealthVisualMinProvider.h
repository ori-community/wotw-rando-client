#pragma once
#include <Modloader/app/structs/SeinHealthVisualMinProvider.h>
#include <Modloader/app/structs/SeinHealthVisualMinProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMinProvider {
        inline app::SeinHealthVisualMinProvider__Class** type_info() {
            static app::SeinHealthVisualMinProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthVisualMinProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthVisualMinProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMinProvider__Class>(type_info(), "", "SeinHealthVisualMinProvider");
        }
        inline app::SeinHealthVisualMinProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMinProvider>(get_class());
        }
    } // namespace SeinHealthVisualMinProvider
} // namespace app::classes::types
