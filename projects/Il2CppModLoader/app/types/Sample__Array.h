#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sample__Array {
        namespace {
            app::Sample__Array__Class* type_info_ref = nullptr;
        }
        app::Sample__Array__Class** type_info = &type_info_ref;
        inline app::Sample__Array__Class* get_class() {
            return il2cpp::get_class<app::Sample__Array__Class>(type_info, "Moon.ArtOptimization", "Sample[]");
        }
        inline app::Sample__Array* create() {
            return il2cpp::create_object<app::Sample__Array>(get_class());
        }
    } // namespace Sample__Array
} // namespace app::classes::types
