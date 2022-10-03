#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberBloomAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberBloomAnimator__Class** type_info;
        inline app::UberBloomAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberBloomAnimator__Class>(type_info, "", "UberBloomAnimator");
        }
        inline app::UberBloomAnimator* create() {
            return il2cpp::create_object<app::UberBloomAnimator>(get_class());
        }
        inline app::UberBloomAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberBloomAnimator__Array>(get_class(), size);
        }
    } // namespace UberBloomAnimator
} // namespace app::classes::types
