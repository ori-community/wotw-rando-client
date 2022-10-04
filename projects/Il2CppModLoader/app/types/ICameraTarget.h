#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICameraTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICameraTarget__Class** type_info;
        inline app::ICameraTarget__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Class>(type_info, "", "ICameraTarget");
        }
        inline app::ICameraTarget* create() {
            return il2cpp::create_object<app::ICameraTarget>(get_class());
        }
        inline app::ICameraTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraTarget__Array>(get_class(), size);
        }
    } // namespace ICameraTarget
} // namespace app::classes::types
