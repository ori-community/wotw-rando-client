#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockableLaser_ActivationTimeslicer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockableLaser_ActivationTimeslicer__Class** type_info;
        inline app::BlockableLaser_ActivationTimeslicer__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockableLaser_ActivationTimeslicer__Class>(type_info, "", "BlockableLaser", "ActivationTimeslicer");
        }
        inline app::BlockableLaser_ActivationTimeslicer* create() {
            return il2cpp::create_object<app::BlockableLaser_ActivationTimeslicer>(get_class());
        }
    } // namespace BlockableLaser_ActivationTimeslicer
} // namespace app::classes::types
