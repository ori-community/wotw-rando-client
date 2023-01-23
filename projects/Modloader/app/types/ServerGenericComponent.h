#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerGenericComponent__Class.h>
#include <Modloader/app/structs/ServerGenericComponent.h>

namespace app::classes::types {
    namespace ServerGenericComponent {
        namespace {
            inline app::ServerGenericComponent__Class* type_info_ref = nullptr;
        }
        inline app::ServerGenericComponent__Class** type_info = &type_info_ref;
        inline app::ServerGenericComponent__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericComponent__Class>(type_info, "", "ServerGenericComponent");
        }
        inline app::ServerGenericComponent* create() {
            return il2cpp::create_object<app::ServerGenericComponent>(get_class());
        }
    } // namespace ServerGenericComponent
} // namespace app::classes::types
