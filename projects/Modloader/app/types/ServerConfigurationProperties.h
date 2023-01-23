#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerConfigurationProperties__Class.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#include <Modloader/app/structs/ServerConfigurationProperties__Boxed.h>

namespace app::classes::types {
    namespace ServerConfigurationProperties {
        namespace {
            inline app::ServerConfigurationProperties__Class* type_info_ref = nullptr;
        }
        inline app::ServerConfigurationProperties__Class** type_info = &type_info_ref;
        inline app::ServerConfigurationProperties__Class* get_class() {
            return il2cpp::get_class<app::ServerConfigurationProperties__Class>(type_info, "", "ServerConfigurationProperties");
        }
        inline app::ServerConfigurationProperties* create() {
            return il2cpp::create_object<app::ServerConfigurationProperties>(get_class());
        }
        inline app::ServerConfigurationProperties__Boxed* box(app::ServerConfigurationProperties value) {
            return il2cpp::box_value<app::ServerConfigurationProperties__Boxed>(get_class(), value);
        }
    } // namespace ServerConfigurationProperties
} // namespace app::classes::types
