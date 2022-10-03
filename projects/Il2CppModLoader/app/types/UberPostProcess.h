#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPostProcess__Class** type_info;
        inline app::UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcess__Class>(type_info, "", "UberPostProcess");
        }
        inline app::UberPostProcess* create() {
            return il2cpp::create_object<app::UberPostProcess>(get_class());
        }
        inline app::UberPostProcess__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPostProcess__Array>(get_class(), size);
        }
    } // namespace UberPostProcess
} // namespace app::classes::types
