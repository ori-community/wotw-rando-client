#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Protocol__Array {
        namespace {
            inline app::Protocol__Array__Class* type_info_ref = nullptr;
        }
        inline app::Protocol__Array__Class** type_info = &type_info_ref;
        inline app::Protocol__Array__Class* get_class() {
            return il2cpp::get_class<app::Protocol__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Protocol[]");
        }
        inline app::Protocol__Array* create() {
            return il2cpp::create_object<app::Protocol__Array>(get_class());
        }
    } // namespace Protocol__Array
} // namespace app::classes::types
