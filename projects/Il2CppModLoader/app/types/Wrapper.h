#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Wrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Wrapper__Class** type_info;
        inline app::Wrapper__Class* get_class() {
            return il2cpp::get_class<app::Wrapper__Class>(type_info, "Grdk", "Wrapper");
        }
        inline app::Wrapper* create() {
            return il2cpp::create_object<app::Wrapper>(get_class());
        }
    } // namespace Wrapper
} // namespace app::classes::types
