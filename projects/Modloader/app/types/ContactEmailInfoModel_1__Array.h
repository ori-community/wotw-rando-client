#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel_1__Array {
        namespace {
            inline app::ContactEmailInfoModel_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::ContactEmailInfoModel_1__Array__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfoModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel_1__Array__Class>(type_info, "PlayFab.ServerModels", "ContactEmailInfoModel[]");
        }
        inline app::ContactEmailInfoModel_1__Array* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel_1__Array>(get_class());
        }
    } // namespace ContactEmailInfoModel_1__Array
} // namespace app::classes::types
