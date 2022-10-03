#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmerProgress {
        namespace {
            app::UberShaderPrewarmerProgress__Class* type_info_ref = nullptr;
        }
        app::UberShaderPrewarmerProgress__Class** type_info = &type_info_ref;
        inline app::UberShaderPrewarmerProgress__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmerProgress__Class>(type_info, "", "UberShaderPrewarmerProgress");
        }
        inline app::UberShaderPrewarmerProgress* create() {
            return il2cpp::create_object<app::UberShaderPrewarmerProgress>(get_class());
        }
    } // namespace UberShaderPrewarmerProgress
} // namespace app::classes::types
