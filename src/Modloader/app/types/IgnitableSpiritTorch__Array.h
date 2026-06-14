#pragma once
#include <Modloader/app/structs/IgnitableSpiritTorch__Array.h>
#include <Modloader/app/structs/IgnitableSpiritTorch__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnitableSpiritTorch__Array {
        inline app::IgnitableSpiritTorch__Array__Class** type_info() {
            static app::IgnitableSpiritTorch__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnitableSpiritTorch__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnitableSpiritTorch__Array__Class* get_class() {
            return il2cpp::get_class<app::IgnitableSpiritTorch__Array__Class>(type_info(), "", "IgnitableSpiritTorch[]");
        }
        inline app::IgnitableSpiritTorch__Array* create() {
            return il2cpp::create_object<app::IgnitableSpiritTorch__Array>(get_class());
        }
    } // namespace IgnitableSpiritTorch__Array
} // namespace app::classes::types
