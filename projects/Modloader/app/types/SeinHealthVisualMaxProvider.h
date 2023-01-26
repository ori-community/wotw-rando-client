#pragma once
#include <Modloader/app/structs/SeinHealthVisualMaxProvider.h>
#include <Modloader/app/structs/SeinHealthVisualMaxProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMaxProvider {
        inline app::SeinHealthVisualMaxProvider__Class** type_info() {
            static app::SeinHealthVisualMaxProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthVisualMaxProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthVisualMaxProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMaxProvider__Class>(type_info(), "", "SeinHealthVisualMaxProvider");
        }
        inline app::SeinHealthVisualMaxProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMaxProvider>(get_class());
        }
    } // namespace SeinHealthVisualMaxProvider
} // namespace app::classes::types
