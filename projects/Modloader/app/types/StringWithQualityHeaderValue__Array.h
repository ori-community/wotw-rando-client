#pragma once
#include <Modloader/app/structs/StringWithQualityHeaderValue__Array.h>
#include <Modloader/app/structs/StringWithQualityHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringWithQualityHeaderValue__Array {
        inline app::StringWithQualityHeaderValue__Array__Class** type_info() {
            static app::StringWithQualityHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringWithQualityHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringWithQualityHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::StringWithQualityHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "StringWithQualityHeaderValue[]");
        }
        inline app::StringWithQualityHeaderValue__Array* create() {
            return il2cpp::create_object<app::StringWithQualityHeaderValue__Array>(get_class());
        }
    } // namespace StringWithQualityHeaderValue__Array
} // namespace app::classes::types
