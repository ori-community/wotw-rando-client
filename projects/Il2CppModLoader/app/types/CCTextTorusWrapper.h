#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextTorusWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCTextTorusWrapper__Class** type_info;
        inline app::CCTextTorusWrapper__Class* get_class() {
            return il2cpp::get_class<app::CCTextTorusWrapper__Class>(type_info, "", "CCTextTorusWrapper");
        }
        inline app::CCTextTorusWrapper* create() {
            return il2cpp::create_object<app::CCTextTorusWrapper>(get_class());
        }
    } // namespace CCTextTorusWrapper
} // namespace app::classes::types
