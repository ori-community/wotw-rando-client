#pragma once
#include <Modloader/app/structs/QosServer.h>
#include <Modloader/app/structs/QosServer__Array.h>
#include <Modloader/app/structs/QosServer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QosServer {
        inline app::QosServer__Class** type_info() {
            static app::QosServer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QosServer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QosServer__Class* get_class() {
            return il2cpp::get_class<app::QosServer__Class>(type_info(), "PlayFab.MultiplayerModels", "QosServer");
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
