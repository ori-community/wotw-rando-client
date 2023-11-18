#pragma once
#include <Modloader/app/structs/SeinMaxHealthValueNormalizedProvider.h>
#include <Modloader/app/structs/SeinMaxHealthValueNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxHealthValueNormalizedProvider {
        inline app::SeinMaxHealthValueNormalizedProvider__Class** type_info() {
            static app::SeinMaxHealthValueNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxHealthValueNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxHealthValueNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxHealthValueNormalizedProvider__Class>(type_info(), "", "SeinMaxHealthValueNormalizedProvider");
        }
        inline app::SeinMaxHealthValueNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinMaxHealthValueNormalizedProvider>(get_class());
        }
    } // namespace SeinMaxHealthValueNormalizedProvider
} // namespace app::classes::types
