#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateMatcherBase {
        namespace {
            app::BooleanUberStateMatcherBase__Class* type_info_ref = nullptr;
        }
        app::BooleanUberStateMatcherBase__Class** type_info = &type_info_ref;
        inline app::BooleanUberStateMatcherBase__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateMatcherBase__Class>(type_info, "", "BooleanUberStateMatcherBase");
        }
        inline app::BooleanUberStateMatcherBase* create() {
            return il2cpp::create_object<app::BooleanUberStateMatcherBase>(get_class());
        }
    } // namespace BooleanUberStateMatcherBase
} // namespace app::classes::types
