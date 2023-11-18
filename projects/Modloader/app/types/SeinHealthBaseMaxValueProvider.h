#pragma once
#include <Modloader/app/structs/SeinHealthBaseMaxValueProvider.h>
#include <Modloader/app/structs/SeinHealthBaseMaxValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthBaseMaxValueProvider {
        inline app::SeinHealthBaseMaxValueProvider__Class** type_info() {
            static app::SeinHealthBaseMaxValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthBaseMaxValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthBaseMaxValueProvider__Class>(type_info(), "", "SeinHealthBaseMaxValueProvider");
        }
        inline app::SeinHealthBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinHealthBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinHealthBaseMaxValueProvider
} // namespace app::classes::types
