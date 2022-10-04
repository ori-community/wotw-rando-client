#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISKipUiBackgroundBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISKipUiBackgroundBlur__Class** type_info;
        inline app::ISKipUiBackgroundBlur__Class* get_class() {
            return il2cpp::get_class<app::ISKipUiBackgroundBlur__Class>(type_info, "", "ISKipUiBackgroundBlur");
        }
        inline app::ISKipUiBackgroundBlur* create() {
            return il2cpp::create_object<app::ISKipUiBackgroundBlur>(get_class());
        }
        inline app::ISKipUiBackgroundBlur__Array* create_array(int size) {
            return il2cpp::array_new<app::ISKipUiBackgroundBlur__Array>(get_class(), size);
        }
    } // namespace ISKipUiBackgroundBlur
} // namespace app::classes::types
