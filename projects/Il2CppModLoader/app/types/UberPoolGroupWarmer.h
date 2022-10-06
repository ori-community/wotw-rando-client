#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolGroupWarmer__Class** type_info;
        inline app::UberPoolGroupWarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroupWarmer__Class>(type_info, "", "UberPoolGroupWarmer");
        }
        inline app::UberPoolGroupWarmer* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer>(get_class());
        }
        inline app::UberPoolGroupWarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroupWarmer__Array>(get_class(), size);
        }
        inline app::UberPoolGroupWarmer__Array* create_array(const std::vector<app::UberPoolGroupWarmer*>& items) {
            return il2cpp::array_new<app::UberPoolGroupWarmer__Array>(get_class(), items);
        }
    } // namespace UberPoolGroupWarmer
} // namespace app::classes::types
