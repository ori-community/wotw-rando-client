#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeJumperGroupAgro {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeJumperGroupAgro__Class** type_info;
        inline app::KamikazeJumperGroupAgro__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperGroupAgro__Class>(type_info, "", "KamikazeJumperGroupAgro");
        }
        inline app::KamikazeJumperGroupAgro* create() {
            return il2cpp::create_object<app::KamikazeJumperGroupAgro>(get_class());
        }
        inline app::KamikazeJumperGroupAgro__Array* create_array(int size) {
            return il2cpp::array_new<app::KamikazeJumperGroupAgro__Array>(get_class(), size);
        }
    } // namespace KamikazeJumperGroupAgro
} // namespace app::classes::types
