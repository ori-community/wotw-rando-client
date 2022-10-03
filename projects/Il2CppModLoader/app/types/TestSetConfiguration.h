#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestSetConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TestSetConfiguration__Class** type_info;
        inline app::TestSetConfiguration__Class* get_class() {
            return il2cpp::get_class<app::TestSetConfiguration__Class>(type_info, "", "TestSetConfiguration");
        }
        inline app::TestSetConfiguration* create() {
            return il2cpp::create_object<app::TestSetConfiguration>(get_class());
        }
    } // namespace TestSetConfiguration
} // namespace app::classes::types
