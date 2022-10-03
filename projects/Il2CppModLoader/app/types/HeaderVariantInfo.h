#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderVariantInfo {
        namespace {
            app::HeaderVariantInfo__Class* type_info_ref = nullptr;
        }
        app::HeaderVariantInfo__Class** type_info = &type_info_ref;
        inline app::HeaderVariantInfo__Class* get_class() {
            return il2cpp::get_class<app::HeaderVariantInfo__Class>(type_info, "System.Net", "HeaderVariantInfo");
        }
        inline app::HeaderVariantInfo* create() {
            return il2cpp::create_object<app::HeaderVariantInfo>(get_class());
        }
        inline app::HeaderVariantInfo__Boxed* box(app::HeaderVariantInfo value) {
            return il2cpp::box_value<app::HeaderVariantInfo__Boxed>(get_class(), value);
        }
        inline app::HeaderVariantInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::HeaderVariantInfo__Array>(get_class(), size);
        }
    } // namespace HeaderVariantInfo
} // namespace app::classes::types
