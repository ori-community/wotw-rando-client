#pragma once
#include <Modloader/app/structs/AkDiffractionPathInfoArray.h>
#include <Modloader/app/structs/AkDiffractionPathInfoArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDiffractionPathInfoArray {
        inline app::AkDiffractionPathInfoArray__Class** type_info() {
            static app::AkDiffractionPathInfoArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkDiffractionPathInfoArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkDiffractionPathInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionPathInfoArray__Class>(type_info(), "", "AkDiffractionPathInfoArray");
        }
        inline app::AkDiffractionPathInfoArray* create() {
            return il2cpp::create_object<app::AkDiffractionPathInfoArray>(get_class());
        }
    } // namespace AkDiffractionPathInfoArray
} // namespace app::classes::types
