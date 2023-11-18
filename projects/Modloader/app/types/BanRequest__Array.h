#pragma once
#include <Modloader/app/structs/BanRequest__Array.h>
#include <Modloader/app/structs/BanRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BanRequest__Array {
        inline app::BanRequest__Array__Class** type_info() {
            static app::BanRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BanRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BanRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::BanRequest__Array__Class>(type_info(), "PlayFab.ServerModels", "BanRequest[]");
        }
        inline app::BanRequest__Array* create() {
            return il2cpp::create_object<app::BanRequest__Array>(get_class());
        }
    } // namespace BanRequest__Array
} // namespace app::classes::types
