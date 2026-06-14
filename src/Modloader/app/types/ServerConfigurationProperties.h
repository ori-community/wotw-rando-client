#pragma once
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#include <Modloader/app/structs/ServerConfigurationProperties__Boxed.h>
#include <Modloader/app/structs/ServerConfigurationProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfigurationProperties {
        inline app::ServerConfigurationProperties__Class** type_info() {
            static app::ServerConfigurationProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerConfigurationProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerConfigurationProperties__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigurationProperties__Class>(type_info(), "", "ServerConfigurationProperties");
        }
        inline app::ServerConfigurationProperties* create() {
            return il2cpp::create_object<app::ServerConfigurationProperties>(get_class());
        }
        inline app::ServerConfigurationProperties__Boxed* box(app::ServerConfigurationProperties value) {
            return il2cpp::box_value<app::ServerConfigurationProperties__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigurationProperties
} // namespace app::classes::types
