#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundProvider__Class** type_info;
        inline app::SoundProvider__Class* get_class() {
            return il2cpp::get_class<app::SoundProvider__Class>(type_info, "", "SoundProvider");
        }
        inline app::SoundProvider* create() {
            return il2cpp::create_object<app::SoundProvider>(get_class());
        }
        inline app::SoundProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundProvider__Array>(get_class(), size);
        }
        inline app::SoundProvider__Array* create_array(const std::vector<app::SoundProvider*>& items) {
            return il2cpp::array_new<app::SoundProvider__Array>(get_class(), items);
        }
    } // namespace SoundProvider
} // namespace app::classes::types
