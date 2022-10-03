#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SanityResult {
        namespace {
            app::SanityResult__Class* type_info_ref = nullptr;
        }
        app::SanityResult__Class** type_info = &type_info_ref;
        inline app::SanityResult__Class* get_class() {
            return il2cpp::get_class<app::SanityResult__Class>(type_info, "", "SanityResult");
        }
        inline app::SanityResult* create() {
            return il2cpp::create_object<app::SanityResult>(get_class());
        }
    } // namespace SanityResult
} // namespace app::classes::types
