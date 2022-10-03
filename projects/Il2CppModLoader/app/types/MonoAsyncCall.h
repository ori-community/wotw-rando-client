#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoAsyncCall {
        namespace {
            app::MonoAsyncCall__Class* type_info_ref = nullptr;
        }
        app::MonoAsyncCall__Class** type_info = &type_info_ref;
        inline app::MonoAsyncCall__Class* get_class() {
            return il2cpp::get_class<app::MonoAsyncCall__Class>(type_info, "System", "MonoAsyncCall");
        }
        inline app::MonoAsyncCall* create() {
            return il2cpp::create_object<app::MonoAsyncCall>(get_class());
        }
    } // namespace MonoAsyncCall
} // namespace app::classes::types
