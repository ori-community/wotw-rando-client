#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowGetWispTextEntity {
        namespace {
            app::ShowGetWispTextEntity__Class* type_info_ref = nullptr;
        }
        app::ShowGetWispTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowGetWispTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowGetWispTextEntity__Class>(type_info, "Moon.Timeline", "ShowGetWispTextEntity");
        }
        inline app::ShowGetWispTextEntity* create() {
            return il2cpp::create_object<app::ShowGetWispTextEntity>(get_class());
        }
    } // namespace ShowGetWispTextEntity
} // namespace app::classes::types
