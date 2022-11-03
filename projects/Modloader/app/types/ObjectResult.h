#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectResult {
        namespace {
            inline app::ObjectResult__Class* type_info_ref = nullptr;
        }
        inline app::ObjectResult__Class** type_info = &type_info_ref;
        inline app::ObjectResult__Class* get_class() {
            return il2cpp::get_class<app::ObjectResult__Class>(type_info, "PlayFab.DataModels", "ObjectResult");
        }
        inline app::ObjectResult* create() {
            return il2cpp::create_object<app::ObjectResult>(get_class());
        }
        inline app::ObjectResult__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectResult__Array>(get_class(), size);
        }
        inline app::ObjectResult__Array* create_array(const std::vector<app::ObjectResult*>& items) {
            return il2cpp::array_new<app::ObjectResult__Array>(get_class(), items);
        }
    } // namespace ObjectResult
} // namespace app::classes::types
