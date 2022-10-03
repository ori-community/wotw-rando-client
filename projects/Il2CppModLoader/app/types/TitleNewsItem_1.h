#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleNewsItem_1 {
        namespace {
            app::TitleNewsItem_1__Class* type_info_ref = nullptr;
        }
        app::TitleNewsItem_1__Class** type_info = &type_info_ref;
        inline app::TitleNewsItem_1__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem_1__Class>(type_info, "PlayFab.ServerModels", "TitleNewsItem");
        }
        inline app::TitleNewsItem_1* create() {
            return il2cpp::create_object<app::TitleNewsItem_1>(get_class());
        }
        inline app::TitleNewsItem_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TitleNewsItem_1__Array>(get_class(), size);
        }
    } // namespace TitleNewsItem_1
} // namespace app::classes::types
