#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolGroup__Class** type_info;
        inline app::UberPoolGroup__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroup__Class>(type_info, "", "UberPoolGroup");
        }
        inline app::UberPoolGroup* create() {
            return il2cpp::create_object<app::UberPoolGroup>(get_class());
        }
        inline app::UberPoolGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroup__Array>(get_class(), size);
        }
    } // namespace UberPoolGroup
} // namespace app::classes::types
