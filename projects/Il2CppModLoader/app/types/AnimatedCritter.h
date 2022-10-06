#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatedCritter {
        namespace {
            app::AnimatedCritter__Class* type_info_ref = nullptr;
        }
        app::AnimatedCritter__Class** type_info = &type_info_ref;
        inline app::AnimatedCritter__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritter__Class>(type_info, "", "AnimatedCritter");
        }
        inline app::AnimatedCritter* create() {
            return il2cpp::create_object<app::AnimatedCritter>(get_class());
        }
        inline app::AnimatedCritter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimatedCritter__Array>(get_class(), size);
        }
        inline app::AnimatedCritter__Array* create_array(const std::vector<app::AnimatedCritter*>& items) {
            return il2cpp::array_new<app::AnimatedCritter__Array>(get_class(), items);
        }
    } // namespace AnimatedCritter
} // namespace app::classes::types
