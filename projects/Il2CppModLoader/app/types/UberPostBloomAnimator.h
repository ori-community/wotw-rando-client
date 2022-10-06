#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostBloomAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPostBloomAnimator__Class** type_info;
        inline app::UberPostBloomAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostBloomAnimator__Class>(type_info, "", "UberPostBloomAnimator");
        }
        inline app::UberPostBloomAnimator* create() {
            return il2cpp::create_object<app::UberPostBloomAnimator>(get_class());
        }
        inline app::UberPostBloomAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPostBloomAnimator__Array>(get_class(), size);
        }
        inline app::UberPostBloomAnimator__Array* create_array(const std::vector<app::UberPostBloomAnimator*>& items) {
            return il2cpp::array_new<app::UberPostBloomAnimator__Array>(get_class(), items);
        }
    } // namespace UberPostBloomAnimator
} // namespace app::classes::types
