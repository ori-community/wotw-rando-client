#pragma once
#include <Modloader/app/structs/SeinLevelValueProvider.h>
#include <Modloader/app/structs/SeinLevelValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLevelValueProvider {
        inline app::SeinLevelValueProvider__Class** type_info() {
            static app::SeinLevelValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLevelValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLevelValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinLevelValueProvider__Class>(type_info(), "", "SeinLevelValueProvider");
        }
        inline app::SeinLevelValueProvider* create() {
            return il2cpp::create_object<app::SeinLevelValueProvider>(get_class());
        }
    } // namespace SeinLevelValueProvider
} // namespace app::classes::types
