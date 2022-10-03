#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPoser_Map__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericPoser_Map__Array__Class** type_info;
        inline app::GenericPoser_Map__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPoser_Map__Array__Class>(type_info, "RootMotion.FinalIK", "GenericPoser+Map[]");
        }
        inline app::GenericPoser_Map__Array* create() {
            return il2cpp::create_object<app::GenericPoser_Map__Array>(get_class());
        }
    } // namespace GenericPoser_Map__Array
} // namespace app::classes::types
