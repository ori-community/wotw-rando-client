#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContext {
        namespace {
            app::IContext__Class* type_info_ref = nullptr;
        }
        app::IContext__Class** type_info = &type_info_ref;
        inline app::IContext__Class* get_class() {
            return il2cpp::get_class<app::IContext__Class>(type_info, "", "IContext");
        }
        inline app::IContext* create() {
            return il2cpp::create_object<app::IContext>(get_class());
        }
        inline app::IContext__Array* create_array(int size) {
            return il2cpp::array_new<app::IContext__Array>(get_class(), size);
        }
    } // namespace IContext
} // namespace app::classes::types
