#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cloud__Class.h>
#include <Modloader/app/structs/Cloud.h>
#include <Modloader/app/structs/Cloud__Array.h>

namespace app::classes::types {
    namespace Cloud {
        namespace {
            inline app::Cloud__Class* type_info_ref = nullptr;
        }
        inline app::Cloud__Class** type_info = &type_info_ref;
        inline app::Cloud__Class* get_class() {
            return il2cpp::get_class<app::Cloud__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Cloud");
        }
        inline app::Cloud* create() {
            return il2cpp::create_object<app::Cloud>(get_class());
        }
        inline app::Cloud__Array* create_array(int size) {
            return il2cpp::array_new<app::Cloud__Array>(get_class(), size);
        }
        inline app::Cloud__Array* create_array(const std::vector<app::Cloud*>& items) {
            return il2cpp::array_new<app::Cloud__Array>(get_class(), items);
        }
    } // namespace Cloud
} // namespace app::classes::types
