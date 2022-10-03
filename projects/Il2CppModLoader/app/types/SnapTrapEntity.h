#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnapTrapEntity {
        namespace {
            app::SnapTrapEntity__Class* type_info_ref = nullptr;
        }
        app::SnapTrapEntity__Class** type_info = &type_info_ref;
        inline app::SnapTrapEntity__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapEntity__Class>(type_info, "", "SnapTrapEntity");
        }
        inline app::SnapTrapEntity* create() {
            return il2cpp::create_object<app::SnapTrapEntity>(get_class());
        }
    } // namespace SnapTrapEntity
} // namespace app::classes::types
