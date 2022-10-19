#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParamArrayAttribute {
        namespace {
            inline app::ParamArrayAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ParamArrayAttribute__Class** type_info = &type_info_ref;
        inline app::ParamArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParamArrayAttribute__Class>(type_info, "System", "ParamArrayAttribute");
        }
        inline app::ParamArrayAttribute* create() {
            return il2cpp::create_object<app::ParamArrayAttribute>(get_class());
        }
    } // namespace ParamArrayAttribute
} // namespace app::classes::types
