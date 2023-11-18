#pragma once
#include <Modloader/app/structs/AkObjectInfoArray.h>
#include <Modloader/app/structs/AkObjectInfoArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkObjectInfoArray {
        inline app::AkObjectInfoArray__Class** type_info() {
            static app::AkObjectInfoArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkObjectInfoArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkObjectInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkObjectInfoArray__Class>(type_info(), "", "AkObjectInfoArray");
        }
        inline app::AkObjectInfoArray* create() {
            return il2cpp::create_object<app::AkObjectInfoArray>(get_class());
        }
    } // namespace AkObjectInfoArray
} // namespace app::classes::types
