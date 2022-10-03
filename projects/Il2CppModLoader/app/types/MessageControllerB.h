#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageControllerB {
        namespace {
            app::MessageControllerB__Class* type_info_ref = nullptr;
        }
        app::MessageControllerB__Class** type_info = &type_info_ref;
        inline app::MessageControllerB__Class* get_class() {
            return il2cpp::get_class<app::MessageControllerB__Class>(type_info, "", "MessageControllerB");
        }
        inline app::MessageControllerB* create() {
            return il2cpp::create_object<app::MessageControllerB>(get_class());
        }
    } // namespace MessageControllerB
} // namespace app::classes::types
