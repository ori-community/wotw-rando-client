#pragma once
#include <Modloader/app/structs/WaitForWaitContextEntity.h>
#include <Modloader/app/structs/WaitForWaitContextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForWaitContextEntity {
        inline app::WaitForWaitContextEntity__Class** type_info() {
            static app::WaitForWaitContextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForWaitContextEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForWaitContextEntity__Class* get_class() {
            return il2cpp::get_class<app::WaitForWaitContextEntity__Class>(type_info(), "Moon.Timeline", "WaitForWaitContextEntity");
        }
        inline app::WaitForWaitContextEntity* create() {
            return il2cpp::create_object<app::WaitForWaitContextEntity>(get_class());
        }
    } // namespace WaitForWaitContextEntity
} // namespace app::classes::types
