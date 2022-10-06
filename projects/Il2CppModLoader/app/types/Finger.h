#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Finger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Finger__Class** type_info;
        inline app::Finger__Class* get_class() {
            return il2cpp::get_class<app::Finger__Class>(type_info, "RootMotion.FinalIK", "Finger");
        }
        inline app::Finger* create() {
            return il2cpp::create_object<app::Finger>(get_class());
        }
        inline app::Finger__Array* create_array(int size) {
            return il2cpp::array_new<app::Finger__Array>(get_class(), size);
        }
        inline app::Finger__Array* create_array(const std::vector<app::Finger*>& items) {
            return il2cpp::array_new<app::Finger__Array>(get_class(), items);
        }
    } // namespace Finger
} // namespace app::classes::types
