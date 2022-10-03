#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreLoadingEntity {
        namespace {
            app::PreLoadingEntity__Class* type_info_ref = nullptr;
        }
        app::PreLoadingEntity__Class** type_info = &type_info_ref;
        inline app::PreLoadingEntity__Class* get_class() {
            return il2cpp::get_class<app::PreLoadingEntity__Class>(type_info, "Moon.Timeline", "PreLoadingEntity");
        }
        inline app::PreLoadingEntity* create() {
            return il2cpp::create_object<app::PreLoadingEntity>(get_class());
        }
    } // namespace PreLoadingEntity
} // namespace app::classes::types
