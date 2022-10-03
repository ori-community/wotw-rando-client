#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RelatedView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RelatedView__Class** type_info;
        inline app::RelatedView__Class* get_class() {
            return il2cpp::get_class<app::RelatedView__Class>(type_info, "System.Data", "RelatedView");
        }
        inline app::RelatedView* create() {
            return il2cpp::create_object<app::RelatedView>(get_class());
        }
    } // namespace RelatedView
} // namespace app::classes::types
