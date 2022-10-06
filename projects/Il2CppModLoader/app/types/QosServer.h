#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QosServer {
        namespace {
            app::QosServer__Class* type_info_ref = nullptr;
        }
        app::QosServer__Class** type_info = &type_info_ref;
        inline app::QosServer__Class* get_class() {
            return il2cpp::get_class<app::QosServer__Class>(type_info, "PlayFab.MultiplayerModels", "QosServer");
        }
        inline app::QosServer* create() {
            return il2cpp::create_object<app::QosServer>(get_class());
        }
        inline app::QosServer__Array* create_array(int size) {
            return il2cpp::array_new<app::QosServer__Array>(get_class(), size);
        }
        inline app::QosServer__Array* create_array(const std::vector<app::QosServer*>& items) {
            return il2cpp::array_new<app::QosServer__Array>(get_class(), items);
        }
    } // namespace QosServer
} // namespace app::classes::types
