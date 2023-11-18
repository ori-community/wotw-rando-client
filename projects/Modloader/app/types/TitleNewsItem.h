#pragma once
#include <Modloader/app/structs/TitleNewsItem.h>
#include <Modloader/app/structs/TitleNewsItem__Array.h>
#include <Modloader/app/structs/TitleNewsItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleNewsItem {
        inline app::TitleNewsItem__Class** type_info() {
            static app::TitleNewsItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleNewsItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleNewsItem__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem__Class>(type_info(), "PlayFab.ClientModels", "TitleNewsItem");
        }
        inline app::TitleNewsItem* create() {
            return il2cpp::create_object<app::TitleNewsItem>(get_class());
        }
        inline app::TitleNewsItem__Array* create_array(int size) {
            return il2cpp::array_new<app::TitleNewsItem__Array>(get_class(), size);
        }
        inline app::TitleNewsItem__Array* create_array(const std::vector<app::TitleNewsItem*>& items) {
            return il2cpp::array_new<app::TitleNewsItem__Array>(get_class(), items);
        }
    } // namespace TitleNewsItem
} // namespace app::classes::types
