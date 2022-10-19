#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionC2CDemo {
        namespace {
            inline app::InteractionC2CDemo__Class* type_info_ref = nullptr;
        }
        inline app::InteractionC2CDemo__Class** type_info = &type_info_ref;
        inline app::InteractionC2CDemo__Class* get_class() {
            return il2cpp::get_class<app::InteractionC2CDemo__Class>(type_info, "RootMotion.Demos", "InteractionC2CDemo");
        }
        inline app::InteractionC2CDemo* create() {
            return il2cpp::create_object<app::InteractionC2CDemo>(get_class());
        }
    } // namespace InteractionC2CDemo
} // namespace app::classes::types
