#pragma once
#include <Modloader/app/structs/SeinEnterExitCollision.h>
#include <Modloader/app/structs/SeinEnterExitCollision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnterExitCollision {
        inline app::SeinEnterExitCollision__Class** type_info() {
            static app::SeinEnterExitCollision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnterExitCollision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnterExitCollision__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitCollision__Class>(type_info(), "", "SeinEnterExitCollision");
        }
        inline app::SeinEnterExitCollision* create() {
            return il2cpp::create_object<app::SeinEnterExitCollision>(get_class());
        }
    } // namespace SeinEnterExitCollision
} // namespace app::classes::types
