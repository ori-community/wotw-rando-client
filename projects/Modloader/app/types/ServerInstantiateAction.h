#pragma once
#include <Modloader/app/structs/ServerInstantiateAction.h>
#include <Modloader/app/structs/ServerInstantiateAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerInstantiateAction {
        inline app::ServerInstantiateAction__Class** type_info() {
            static app::ServerInstantiateAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerInstantiateAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerInstantiateAction__Class* get_class() {
            return il2cpp::get_class<app::ServerInstantiateAction__Class>(type_info(), "", "ServerInstantiateAction");
        }
        inline app::ServerInstantiateAction* create() {
            return il2cpp::create_object<app::ServerInstantiateAction>(get_class());
        }
    } // namespace ServerInstantiateAction
} // namespace app::classes::types
