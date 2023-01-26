#pragma once
#include <Modloader/app/structs/FixedUpdateScheduler.h>
#include <Modloader/app/structs/FixedUpdateScheduler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler {
        inline app::FixedUpdateScheduler__Class** type_info() {
            static app::FixedUpdateScheduler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdateScheduler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdateScheduler__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateScheduler__Class>(type_info(), "", "FixedUpdateScheduler");
        }
        inline app::FixedUpdateScheduler* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler>(get_class());
        }
    } // namespace FixedUpdateScheduler
} // namespace app::classes::types
