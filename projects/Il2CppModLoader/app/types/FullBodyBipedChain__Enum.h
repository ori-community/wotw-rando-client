#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullBodyBipedChain__Enum {
        namespace {
            app::FullBodyBipedChain__Enum__Class* type_info_ref = nullptr;
        }
        app::FullBodyBipedChain__Enum__Class** type_info = &type_info_ref;
        inline app::FullBodyBipedChain__Enum__Class* get_class() {
            return il2cpp::get_class<app::FullBodyBipedChain__Enum__Class>(type_info, "RootMotion.FinalIK", "FullBodyBipedChain");
        }
        inline app::FullBodyBipedChain__Enum* create() {
            return il2cpp::create_object<app::FullBodyBipedChain__Enum>(get_class());
        }
    } // namespace FullBodyBipedChain__Enum
} // namespace app::classes::types
