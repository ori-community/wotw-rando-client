#pragma once
#include <Modloader/app/structs/UpdateUberShaderOnFixedUpdate.h>
#include <Modloader/app/structs/UpdateUberShaderOnFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUberShaderOnFixedUpdate {
        inline app::UpdateUberShaderOnFixedUpdate__Class** type_info() {
            static app::UpdateUberShaderOnFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateUberShaderOnFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateUberShaderOnFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::UpdateUberShaderOnFixedUpdate__Class>(type_info(), "", "UpdateUberShaderOnFixedUpdate");
        }
        inline app::UpdateUberShaderOnFixedUpdate* create() {
            return il2cpp::create_object<app::UpdateUberShaderOnFixedUpdate>(get_class());
        }
    } // namespace UpdateUberShaderOnFixedUpdate
} // namespace app::classes::types
