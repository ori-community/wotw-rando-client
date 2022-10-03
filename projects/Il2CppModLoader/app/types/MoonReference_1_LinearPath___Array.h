#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonReference_1_LinearPath___Array {
        namespace {
            app::MoonReference_1_LinearPath___Array__Class* type_info_ref = nullptr;
        }
        app::MoonReference_1_LinearPath___Array__Class** type_info = &type_info_ref;
        inline app::MoonReference_1_LinearPath___Array__Class* get_class() {
            return il2cpp::get_class<app::MoonReference_1_LinearPath___Array__Class>(type_info, "Moon", "MoonReference`1[LinearPath][]");
        }
        inline app::MoonReference_1_LinearPath___Array* create() {
            return il2cpp::create_object<app::MoonReference_1_LinearPath___Array>(get_class());
        }
    } // namespace MoonReference_1_LinearPath___Array
} // namespace app::classes::types
