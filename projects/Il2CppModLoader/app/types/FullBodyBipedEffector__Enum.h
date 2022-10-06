#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullBodyBipedEffector__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FullBodyBipedEffector__Enum__Class** type_info;
        inline app::FullBodyBipedEffector__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedEffector__Enum__Class>(type_info, "RootMotion.FinalIK", "FullBodyBipedEffector");
        }
        inline app::FullBodyBipedEffector__Enum* create() {
            return il2cpp::create_object<app::FullBodyBipedEffector__Enum>(get_class());
        }
        inline app::FullBodyBipedEffector__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::FullBodyBipedEffector__Enum__Array>(get_class(), size);
        }
        inline app::FullBodyBipedEffector__Enum__Array* create_array(const std::vector<app::FullBodyBipedEffector__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::FullBodyBipedEffector__Enum__Array>(get_class(), items);
        }
    } // namespace FullBodyBipedEffector__Enum
} // namespace app::classes::types
