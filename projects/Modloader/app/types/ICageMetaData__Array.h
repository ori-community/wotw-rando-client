#pragma once
#include <Modloader/app/structs/ICageMetaData__Array.h>
#include <Modloader/app/structs/ICageMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICageMetaData__Array {
        inline app::ICageMetaData__Array__Class** type_info() {
            static app::ICageMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICageMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICageMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::ICageMetaData__Array__Class>(type_info(), "", "ICageMetaData[]");
        }
        inline app::ICageMetaData__Array* create() {
            return il2cpp::create_object<app::ICageMetaData__Array>(get_class());
        }
    } // namespace ICageMetaData__Array
} // namespace app::classes::types
