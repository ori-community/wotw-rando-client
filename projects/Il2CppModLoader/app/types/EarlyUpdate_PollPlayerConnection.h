#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_PollPlayerConnection {
        namespace {
            app::EarlyUpdate_PollPlayerConnection__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_PollPlayerConnection__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_PollPlayerConnection__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PollPlayerConnection__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PollPlayerConnection");
        }
        inline app::EarlyUpdate_PollPlayerConnection* create() {
            return il2cpp::create_object<app::EarlyUpdate_PollPlayerConnection>(get_class());
        }
        inline app::EarlyUpdate_PollPlayerConnection__Boxed* box(app::EarlyUpdate_PollPlayerConnection value) {
            return il2cpp::box_value<app::EarlyUpdate_PollPlayerConnection__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PollPlayerConnection
} // namespace app::classes::types
