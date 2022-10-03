#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderPlaceholder {
        namespace {
            app::BuilderPlaceholder__Class* type_info_ref = nullptr;
        }
        app::BuilderPlaceholder__Class** type_info = &type_info_ref;
        inline app::BuilderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::BuilderPlaceholder__Class>(type_info, "", "BuilderPlaceholder");
        }
        inline app::BuilderPlaceholder* create() {
            return il2cpp::create_object<app::BuilderPlaceholder>(get_class());
        }
    } // namespace BuilderPlaceholder
} // namespace app::classes::types
