#pragma once
#include <Modloader/app/structs/UserOpenIdInfo.h>
#include <Modloader/app/structs/UserOpenIdInfo__Array.h>
#include <Modloader/app/structs/UserOpenIdInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserOpenIdInfo {
        inline app::UserOpenIdInfo__Class** type_info() {
            static app::UserOpenIdInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserOpenIdInfo__Class**)(modloader::win::memory::resolve_rva(0x0478C930));
            }
            return cache;
        }
        inline app::UserOpenIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserOpenIdInfo__Class>(type_info(), "PlayFab.ClientModels", "UserOpenIdInfo");
        }
        inline app::UserOpenIdInfo* create() {
            return il2cpp::create_object<app::UserOpenIdInfo>(get_class());
        }
        inline app::UserOpenIdInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UserOpenIdInfo__Array>(get_class(), size);
        }
        inline app::UserOpenIdInfo__Array* create_array(const std::vector<app::UserOpenIdInfo*>& items) {
            return il2cpp::array_new<app::UserOpenIdInfo__Array>(get_class(), items);
        }
    } // namespace UserOpenIdInfo
} // namespace app::classes::types
