#pragma once
#include <Modloader/app/structs/TitleNewsItem__Array.h>
#include <Modloader/app/structs/TitleNewsItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleNewsItem__Array {
        inline app::TitleNewsItem__Array__Class** type_info() {
            static app::TitleNewsItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleNewsItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleNewsItem__Array__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem__Array__Class>(type_info(), "PlayFab.ClientModels", "TitleNewsItem[]");
        }
        inline app::TitleNewsItem__Array* create() {
            return il2cpp::create_object<app::TitleNewsItem__Array>(get_class());
        }
    } // namespace TitleNewsItem__Array
} // namespace app::classes::types
