#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialVFXSet__Array {
        namespace {
            inline app::MaterialVFXSet__Array__Class* type_info_ref = nullptr;
        }
        inline app::MaterialVFXSet__Array__Class** type_info = &type_info_ref;
        inline app::MaterialVFXSet__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSet__Array__Class>(type_info, "", "MaterialVFXSet[]");
        }
        inline app::MaterialVFXSet__Array* create() {
            return il2cpp::create_object<app::MaterialVFXSet__Array>(get_class());
        }
    } // namespace MaterialVFXSet__Array
} // namespace app::classes::types
