#pragma once
#include <Modloader/app/structs/FlagsAttribute.h>
#include <Modloader/app/structs/FlagsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlagsAttribute {
        inline app::FlagsAttribute__Class** type_info() {
            static app::FlagsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlagsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlagsAttribute__Class* get_class() {
            return il2cpp::get_class<app::FlagsAttribute__Class>(type_info(), "System", "FlagsAttribute");
        }
        inline app::FlagsAttribute* create() {
            return il2cpp::create_object<app::FlagsAttribute>(get_class());
        }
    } // namespace FlagsAttribute
} // namespace app::classes::types
