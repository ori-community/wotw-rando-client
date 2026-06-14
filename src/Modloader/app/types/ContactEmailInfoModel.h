#pragma once
#include <Modloader/app/structs/ContactEmailInfoModel.h>
#include <Modloader/app/structs/ContactEmailInfoModel__Array.h>
#include <Modloader/app/structs/ContactEmailInfoModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel {
        inline app::ContactEmailInfoModel__Class** type_info() {
            static app::ContactEmailInfoModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContactEmailInfoModel__Class**)(modloader::win::memory::resolve_rva(0x0471E7B8));
            }
            return cache;
        }
        inline app::ContactEmailInfoModel__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel__Class>(type_info(), "PlayFab.ClientModels", "ContactEmailInfoModel");
        }
        inline app::ContactEmailInfoModel* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel>(get_class());
        }
        inline app::ContactEmailInfoModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfoModel__Array>(get_class(), size);
        }
        inline app::ContactEmailInfoModel__Array* create_array(const std::vector<app::ContactEmailInfoModel*>& items) {
            return il2cpp::array_new<app::ContactEmailInfoModel__Array>(get_class(), items);
        }
    } // namespace ContactEmailInfoModel
} // namespace app::classes::types
