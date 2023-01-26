#pragma once
#include <Modloader/app/structs/BanRequest.h>
#include <Modloader/app/structs/BanRequest__Array.h>
#include <Modloader/app/structs/BanRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BanRequest {
        inline app::BanRequest__Class** type_info() {
            static app::BanRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BanRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BanRequest__Class* get_class() {
            return il2cpp::get_class<app::BanRequest__Class>(type_info(), "PlayFab.ServerModels", "BanRequest");
        }
        inline app::BanRequest* create() {
            return il2cpp::create_object<app::BanRequest>(get_class());
        }
        inline app::BanRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::BanRequest__Array>(get_class(), size);
        }
        inline app::BanRequest__Array* create_array(const std::vector<app::BanRequest*>& items) {
            return il2cpp::array_new<app::BanRequest__Array>(get_class(), items);
        }
    } // namespace BanRequest
} // namespace app::classes::types
