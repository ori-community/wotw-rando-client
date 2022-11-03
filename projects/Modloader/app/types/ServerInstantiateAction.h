#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerInstantiateAction {
        namespace {
            inline app::ServerInstantiateAction__Class* type_info_ref = nullptr;
        }
        inline app::ServerInstantiateAction__Class** type_info = &type_info_ref;
        inline app::ServerInstantiateAction__Class* get_class() {
            return il2cpp::get_class<app::ServerInstantiateAction__Class>(type_info, "", "ServerInstantiateAction");
        }
        inline app::ServerInstantiateAction* create() {
            return il2cpp::create_object<app::ServerInstantiateAction>(get_class());
        }
    } // namespace ServerInstantiateAction
} // namespace app::classes::types
