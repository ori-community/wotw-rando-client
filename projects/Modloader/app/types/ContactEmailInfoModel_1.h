#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel_1 {
        namespace {
            inline app::ContactEmailInfoModel_1__Class* type_info_ref = nullptr;
        }
        inline app::ContactEmailInfoModel_1__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfoModel_1__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel_1__Class>(type_info, "PlayFab.ServerModels", "ContactEmailInfoModel");
        }
        inline app::ContactEmailInfoModel_1* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel_1>(get_class());
        }
        inline app::ContactEmailInfoModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfoModel_1__Array>(get_class(), size);
        }
        inline app::ContactEmailInfoModel_1__Array* create_array(const std::vector<app::ContactEmailInfoModel_1*>& items) {
            return il2cpp::array_new<app::ContactEmailInfoModel_1__Array>(get_class(), items);
        }
    } // namespace ContactEmailInfoModel_1
} // namespace app::classes::types
