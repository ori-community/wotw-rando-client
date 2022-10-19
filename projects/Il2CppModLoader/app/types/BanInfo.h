#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BanInfo {
        namespace {
            inline app::BanInfo__Class* type_info_ref = nullptr;
        }
        inline app::BanInfo__Class** type_info = &type_info_ref;
        inline app::BanInfo__Class* get_class() {
            return il2cpp::get_class<app::BanInfo__Class>(type_info, "PlayFab.ServerModels", "BanInfo");
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
