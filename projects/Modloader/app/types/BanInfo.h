#pragma once
#include <Modloader/app/structs/BanInfo.h>
#include <Modloader/app/structs/BanInfo__Array.h>
#include <Modloader/app/structs/BanInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BanInfo {
        inline app::BanInfo__Class** type_info() {
            static app::BanInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BanInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BanInfo__Class* get_class() {
            return il2cpp::get_class<app::BanInfo__Class>(type_info(), "PlayFab.ServerModels", "BanInfo");
        }
        inline app::BanInfo* create() {
            return il2cpp::create_object<app::BanInfo>(get_class());
        }
        inline app::BanInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::BanInfo__Array>(get_class(), size);
        }
        inline app::BanInfo__Array* create_array(const std::vector<app::BanInfo*>& items) {
            return il2cpp::array_new<app::BanInfo__Array>(get_class(), items);
        }
    } // namespace BanInfo
} // namespace app::classes::types
