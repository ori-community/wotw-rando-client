#pragma once
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>
#include <Modloader/app/structs/AkReflectionPathInfoArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkReflectionPathInfoArray {
        inline app::AkReflectionPathInfoArray__Class** type_info() {
            static app::AkReflectionPathInfoArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkReflectionPathInfoArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkReflectionPathInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkReflectionPathInfoArray__Class>(type_info(), "", "AkReflectionPathInfoArray");
        }
        inline app::AkReflectionPathInfoArray* create() {
            return il2cpp::create_object<app::AkReflectionPathInfoArray>(get_class());
        }
    } // namespace AkReflectionPathInfoArray
} // namespace app::classes::types
