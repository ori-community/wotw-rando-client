#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleNewsItem__Array {
        namespace {
            app::TitleNewsItem__Array__Class* type_info_ref = nullptr;
        }
        app::TitleNewsItem__Array__Class** type_info = &type_info_ref;
        inline app::TitleNewsItem__Array__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem__Array__Class>(type_info, "PlayFab.ClientModels", "TitleNewsItem[]");
        }
        inline app::TitleNewsItem__Array* create() {
            return il2cpp::create_object<app::TitleNewsItem__Array>(get_class());
        }
    } // namespace TitleNewsItem__Array
} // namespace app::classes::types
