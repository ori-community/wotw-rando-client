#pragma once
#include <Modloader/app/structs/LODParameters.h>
#include <Modloader/app/structs/LODParameters__Boxed.h>
#include <Modloader/app/structs/LODParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LODParameters {
        inline app::LODParameters__Class** type_info() {
            static app::LODParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LODParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LODParameters__Class* get_class() {
            return il2cpp::get_class<app::LODParameters__Class>(type_info(), "UnityEngine.Experimental.Rendering", "LODParameters");
        }
        inline app::LODParameters* create() {
            return il2cpp::create_object<app::LODParameters>(get_class());
        }
        inline app::LODParameters__Boxed* box(app::LODParameters value) {
            return il2cpp::box_value<app::LODParameters__Boxed>(get_class(), value);
        }
    } // namespace LODParameters
} // namespace app::classes::types
