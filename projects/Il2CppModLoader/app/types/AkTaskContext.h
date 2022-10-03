#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkTaskContext {
        namespace {
            app::AkTaskContext__Class* type_info_ref = nullptr;
        }
        app::AkTaskContext__Class** type_info = &type_info_ref;
        inline app::AkTaskContext__Class* get_class() {
            return il2cpp::get_class<app::AkTaskContext__Class>(type_info, "", "AkTaskContext");
        }
        inline app::AkTaskContext* create() {
            return il2cpp::create_object<app::AkTaskContext>(get_class());
        }
    } // namespace AkTaskContext
} // namespace app::classes::types
