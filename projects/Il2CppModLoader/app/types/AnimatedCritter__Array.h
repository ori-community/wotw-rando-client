#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatedCritter__Array {
        namespace {
            app::AnimatedCritter__Array__Class* type_info_ref = nullptr;
        }
        app::AnimatedCritter__Array__Class** type_info = &type_info_ref;
        inline app::AnimatedCritter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritter__Array__Class>(type_info, "", "AnimatedCritter[]");
        }
        inline app::AnimatedCritter__Array* create() {
            return il2cpp::create_object<app::AnimatedCritter__Array>(get_class());
        }
    } // namespace AnimatedCritter__Array
} // namespace app::classes::types
