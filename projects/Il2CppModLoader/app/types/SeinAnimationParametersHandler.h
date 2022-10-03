#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationParametersHandler {
        namespace {
            app::SeinAnimationParametersHandler__Class* type_info_ref = nullptr;
        }
        app::SeinAnimationParametersHandler__Class** type_info = &type_info_ref;
        inline app::SeinAnimationParametersHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationParametersHandler__Class>(type_info, "", "SeinAnimationParametersHandler");
        }
        inline app::SeinAnimationParametersHandler* create() {
            return il2cpp::create_object<app::SeinAnimationParametersHandler>(get_class());
        }
    } // namespace SeinAnimationParametersHandler
} // namespace app::classes::types
