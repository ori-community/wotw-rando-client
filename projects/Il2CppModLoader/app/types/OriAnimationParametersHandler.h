#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriAnimationParametersHandler {
        namespace {
            inline app::OriAnimationParametersHandler__Class* type_info_ref = nullptr;
        }
        inline app::OriAnimationParametersHandler__Class** type_info = &type_info_ref;
        inline app::OriAnimationParametersHandler__Class* get_class() {
            return il2cpp::get_class<app::OriAnimationParametersHandler__Class>(type_info, "", "OriAnimationParametersHandler");
        }
        inline app::OriAnimationParametersHandler* create() {
            return il2cpp::create_object<app::OriAnimationParametersHandler>(get_class());
        }
    } // namespace OriAnimationParametersHandler
} // namespace app::classes::types
