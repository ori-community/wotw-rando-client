#pragma once
#include <Modloader/app/structs/EarlyUpdate_PollHtcsPlayerConnection.h>
#include <Modloader/app/structs/EarlyUpdate_PollHtcsPlayerConnection__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_PollHtcsPlayerConnection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_PollHtcsPlayerConnection {
        inline app::EarlyUpdate_PollHtcsPlayerConnection__Class** type_info() {
            static app::EarlyUpdate_PollHtcsPlayerConnection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_PollHtcsPlayerConnection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_PollHtcsPlayerConnection__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PollHtcsPlayerConnection__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PollHtcsPlayerConnection");
        }
        inline app::EarlyUpdate_PollHtcsPlayerConnection* create() {
            return il2cpp::create_object<app::EarlyUpdate_PollHtcsPlayerConnection>(get_class());
        }
        inline app::EarlyUpdate_PollHtcsPlayerConnection__Boxed* box(app::EarlyUpdate_PollHtcsPlayerConnection value) {
            return il2cpp::box_value<app::EarlyUpdate_PollHtcsPlayerConnection__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PollHtcsPlayerConnection
} // namespace app::classes::types
