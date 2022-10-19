#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverridableTextureProperty__Array {
        namespace {
            inline app::OverridableTextureProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::OverridableTextureProperty__Array__Class** type_info = &type_info_ref;
        inline app::OverridableTextureProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::OverridableTextureProperty__Array__Class>(type_info, "", "OverridableTextureProperty[]");
        }
        inline app::OverridableTextureProperty__Array* create() {
            return il2cpp::create_object<app::OverridableTextureProperty__Array>(get_class());
        }
    } // namespace OverridableTextureProperty__Array
} // namespace app::classes::types
