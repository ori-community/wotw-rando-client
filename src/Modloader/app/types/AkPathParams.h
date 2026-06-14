#pragma once
#include <Modloader/app/structs/AkPathParams.h>
#include <Modloader/app/structs/AkPathParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPathParams {
        inline app::AkPathParams__Class** type_info() {
            static app::AkPathParams__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPathParams__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPathParams__Class* get_class() {
            return il2cpp::get_class<app::AkPathParams__Class>(type_info(), "", "AkPathParams");
        }
        inline app::AkPathParams* create() {
            return il2cpp::create_object<app::AkPathParams>(get_class());
        }
    } // namespace AkPathParams
} // namespace app::classes::types
