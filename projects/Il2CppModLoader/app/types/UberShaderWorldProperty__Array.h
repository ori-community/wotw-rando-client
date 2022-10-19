#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderWorldProperty__Array {
        namespace {
            inline app::UberShaderWorldProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderWorldProperty__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderWorldProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldProperty__Array__Class>(type_info, "", "UberShaderWorldProperty[]");
        }
        inline app::UberShaderWorldProperty__Array* create() {
            return il2cpp::create_object<app::UberShaderWorldProperty__Array>(get_class());
        }
    } // namespace UberShaderWorldProperty__Array
} // namespace app::classes::types
