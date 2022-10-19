#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderTextureBase_SubBindIdCache__Array {
        namespace {
            inline app::UberShaderTextureBase_SubBindIdCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderTextureBase_SubBindIdCache__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureBase_SubBindIdCache__Array__Class>(type_info, "", "UberShaderTextureBase+SubBindIdCache[]");
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array* create() {
            return il2cpp::create_object<app::UberShaderTextureBase_SubBindIdCache__Array>(get_class());
        }
    } // namespace UberShaderTextureBase_SubBindIdCache__Array
} // namespace app::classes::types
