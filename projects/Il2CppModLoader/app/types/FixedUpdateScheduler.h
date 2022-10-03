#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler {
        namespace {
            app::FixedUpdateScheduler__Class* type_info_ref = nullptr;
        }
        app::FixedUpdateScheduler__Class** type_info = &type_info_ref;
        inline app::FixedUpdateScheduler__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateScheduler__Class>(type_info, "", "FixedUpdateScheduler");
        }
        inline app::FixedUpdateScheduler* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler>(get_class());
        }
    } // namespace FixedUpdateScheduler
} // namespace app::classes::types
