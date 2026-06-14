#pragma once
#include <Modloader/app/structs/Sample__Array.h>
#include <Modloader/app/structs/Sample__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sample__Array {
        inline app::Sample__Array__Class** type_info() {
            static app::Sample__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sample__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sample__Array__Class* get_class() {
            return il2cpp::get_class<app::Sample__Array__Class>(type_info(), "Moon.ArtOptimization", "Sample[]");
        }
        inline app::Sample__Array* create() {
            return il2cpp::create_object<app::Sample__Array>(get_class());
        }
    } // namespace Sample__Array
} // namespace app::classes::types
