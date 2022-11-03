#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericServiceId {
        namespace {
            inline app::GenericServiceId__Class* type_info_ref = nullptr;
        }
        inline app::GenericServiceId__Class** type_info = &type_info_ref;
        inline app::GenericServiceId__Class* get_class() {
            return il2cpp::get_class<app::GenericServiceId__Class>(type_info, "PlayFab.ClientModels", "GenericServiceId");
        }
        inline app::GenericServiceId* create() {
            return il2cpp::create_object<app::GenericServiceId>(get_class());
        }
        inline app::GenericServiceId__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericServiceId__Array>(get_class(), size);
        }
        inline app::GenericServiceId__Array* create_array(const std::vector<app::GenericServiceId*>& items) {
            return il2cpp::array_new<app::GenericServiceId__Array>(get_class(), items);
        }
    } // namespace GenericServiceId
} // namespace app::classes::types
