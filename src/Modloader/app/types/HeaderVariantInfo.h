#pragma once
#include <Modloader/app/structs/HeaderVariantInfo.h>
#include <Modloader/app/structs/HeaderVariantInfo__Array.h>
#include <Modloader/app/structs/HeaderVariantInfo__Boxed.h>
#include <Modloader/app/structs/HeaderVariantInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderVariantInfo {
        inline app::HeaderVariantInfo__Class** type_info() {
            static app::HeaderVariantInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeaderVariantInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeaderVariantInfo__Class* get_class() {
            return il2cpp::get_class<app::HeaderVariantInfo__Class>(type_info(), "System.Net", "HeaderVariantInfo");
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
        inline app::HeaderVariantInfo__Array* create_array(const std::vector<app::HeaderVariantInfo>& items) {
            return il2cpp::array_new<app::HeaderVariantInfo__Array>(get_class(), items);
        }
    } // namespace HeaderVariantInfo
} // namespace app::classes::types
