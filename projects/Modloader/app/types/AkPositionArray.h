#pragma once
#include <Modloader/app/structs/AkPositionArray.h>
#include <Modloader/app/structs/AkPositionArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPositionArray {
        inline app::AkPositionArray__Class** type_info() {
            static app::AkPositionArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPositionArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPositionArray__Class* get_class() {
            return il2cpp::get_class<app::AkPositionArray__Class>(type_info(), "", "AkPositionArray");
        }
        inline app::AkPositionArray* create() {
            return il2cpp::create_object<app::AkPositionArray>(get_class());
        }
    } // namespace AkPositionArray
} // namespace app::classes::types
