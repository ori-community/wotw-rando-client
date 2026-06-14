#pragma once
#include <Modloader/app/structs/MediaTypeWithQualityHeaderValue__Array.h>
#include <Modloader/app/structs/MediaTypeWithQualityHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MediaTypeWithQualityHeaderValue__Array {
        inline app::MediaTypeWithQualityHeaderValue__Array__Class** type_info() {
            static app::MediaTypeWithQualityHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MediaTypeWithQualityHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MediaTypeWithQualityHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeWithQualityHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue[]");
        }
        inline app::MediaTypeWithQualityHeaderValue__Array* create() {
            return il2cpp::create_object<app::MediaTypeWithQualityHeaderValue__Array>(get_class());
        }
    } // namespace MediaTypeWithQualityHeaderValue__Array
} // namespace app::classes::types
