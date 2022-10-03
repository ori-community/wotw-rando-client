#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LensflareStyle34__Enum {
        namespace {
            app::LensflareStyle34__Enum__Class* type_info_ref = nullptr;
        }
        app::LensflareStyle34__Enum__Class** type_info = &type_info_ref;
        inline app::LensflareStyle34__Enum__Class* get_class() {
            return il2cpp::get_class<app::LensflareStyle34__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "LensflareStyle34");
        }
        inline app::LensflareStyle34__Enum* create() {
            return il2cpp::create_object<app::LensflareStyle34__Enum>(get_class());
        }
    } // namespace LensflareStyle34__Enum
} // namespace app::classes::types
