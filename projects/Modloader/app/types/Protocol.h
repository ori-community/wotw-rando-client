#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Protocol__Class.h>
#include <Modloader/app/structs/Protocol.h>
#include <Modloader/app/structs/Protocol__Array.h>

namespace app::classes::types {
    namespace Protocol {
        namespace {
            inline app::Protocol__Class* type_info_ref = nullptr;
        }
        inline app::Protocol__Class** type_info = &type_info_ref;
        inline app::Protocol__Class* get_class() {
            return il2cpp::get_class<app::Protocol__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Protocol");
        }
        inline app::Protocol* create() {
            return il2cpp::create_object<app::Protocol>(get_class());
        }
        inline app::Protocol__Array* create_array(int size) {
            return il2cpp::array_new<app::Protocol__Array>(get_class(), size);
        }
        inline app::Protocol__Array* create_array(const std::vector<app::Protocol*>& items) {
            return il2cpp::array_new<app::Protocol__Array>(get_class(), items);
        }
    } // namespace Protocol
} // namespace app::classes::types
