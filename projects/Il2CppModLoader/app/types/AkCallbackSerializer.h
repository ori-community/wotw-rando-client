#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackSerializer {
        namespace {
            app::AkCallbackSerializer__Class* type_info_ref = nullptr;
        }
        app::AkCallbackSerializer__Class** type_info = &type_info_ref;
        inline app::AkCallbackSerializer__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackSerializer__Class>(type_info, "", "AkCallbackSerializer");
        }
        inline app::AkCallbackSerializer* create() {
            return il2cpp::create_object<app::AkCallbackSerializer>(get_class());
        }
    } // namespace AkCallbackSerializer
} // namespace app::classes::types
