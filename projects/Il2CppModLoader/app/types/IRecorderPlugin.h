#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecorderPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRecorderPlugin__Class** type_info;
        inline app::IRecorderPlugin__Class* get_class() {
            return il2cpp::get_class<app::IRecorderPlugin__Class>(type_info, "", "IRecorderPlugin");
        }
        inline app::IRecorderPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IRecorderPlugin__Array>(get_class(), size);
        }
    } // namespace IRecorderPlugin
} // namespace app::classes::types
