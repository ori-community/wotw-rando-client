#pragma once
#include <Modloader/app/structs/StringValueProvider.h>
#include <Modloader/app/structs/StringValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringValueProvider {
        inline app::StringValueProvider__Class** type_info() {
            static app::StringValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::StringValueProvider__Class>(type_info(), "", "StringValueProvider");
        }
        inline app::StringValueProvider* create() {
            return il2cpp::create_object<app::StringValueProvider>(get_class());
        }
    } // namespace StringValueProvider
} // namespace app::classes::types
