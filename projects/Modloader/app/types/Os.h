#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Os {
        namespace {
            inline app::Os__Class* type_info_ref = nullptr;
        }
        inline app::Os__Class** type_info = &type_info_ref;
        inline app::Os__Class* get_class() {
            return il2cpp::get_class<app::Os__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Os");
        }
        inline app::Os* create() {
            return il2cpp::create_object<app::Os>(get_class());
        }
        inline app::Os__Array* create_array(int size) {
            return il2cpp::array_new<app::Os__Array>(get_class(), size);
        }
        inline app::Os__Array* create_array(const std::vector<app::Os*>& items) {
            return il2cpp::array_new<app::Os__Array>(get_class(), items);
        }
    } // namespace Os
} // namespace app::classes::types
