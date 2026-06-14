#pragma once
#include <Modloader/app/structs/SeinMaxHealthValueProvider.h>
#include <Modloader/app/structs/SeinMaxHealthValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxHealthValueProvider {
        inline app::SeinMaxHealthValueProvider__Class** type_info() {
            static app::SeinMaxHealthValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxHealthValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxHealthValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxHealthValueProvider__Class>(type_info(), "", "SeinMaxHealthValueProvider");
        }
        inline app::SeinMaxHealthValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxHealthValueProvider>(get_class());
        }
    } // namespace SeinMaxHealthValueProvider
} // namespace app::classes::types
