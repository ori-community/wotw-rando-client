#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MediaTypeWithQualityHeaderValue__Array {
        namespace {
            inline app::MediaTypeWithQualityHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::MediaTypeWithQualityHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::MediaTypeWithQualityHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeWithQualityHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue[]");
        }
        inline app::MediaTypeWithQualityHeaderValue__Array* create() {
            return il2cpp::create_object<app::MediaTypeWithQualityHeaderValue__Array>(get_class());
        }
    } // namespace MediaTypeWithQualityHeaderValue__Array
} // namespace app::classes::types
