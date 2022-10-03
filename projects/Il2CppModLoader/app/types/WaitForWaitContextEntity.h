#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForWaitContextEntity {
        namespace {
            app::WaitForWaitContextEntity__Class* type_info_ref = nullptr;
        }
        app::WaitForWaitContextEntity__Class** type_info = &type_info_ref;
        inline app::WaitForWaitContextEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForWaitContextEntity__Class>(type_info, "Moon.Timeline", "WaitForWaitContextEntity");
        }
        inline app::WaitForWaitContextEntity* create() {
            return il2cpp::create_object<app::WaitForWaitContextEntity>(get_class());
        }
    } // namespace WaitForWaitContextEntity
} // namespace app::classes::types
