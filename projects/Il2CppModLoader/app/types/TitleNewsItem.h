#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleNewsItem {
        namespace {
            inline app::TitleNewsItem__Class* type_info_ref = nullptr;
        }
        inline app::TitleNewsItem__Class** type_info = &type_info_ref;
        inline app::TitleNewsItem__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem__Class>(type_info, "PlayFab.ClientModels", "TitleNewsItem");
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
