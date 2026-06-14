#pragma once
#include <Modloader/app/structs/DecompressionMethods__Enum.h>
#include <Modloader/app/structs/DecompressionMethods__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecompressionMethods__Enum {
        inline app::DecompressionMethods__Enum__Class** type_info() {
            static app::DecompressionMethods__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecompressionMethods__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecompressionMethods__Enum__Class* get_class() {
            return il2cpp::get_class<app::DecompressionMethods__Enum__Class>(type_info(), "System.Net", "DecompressionMethods");
        }
        inline app::DecompressionMethods__Enum* create() {
            return il2cpp::create_object<app::DecompressionMethods__Enum>(get_class());
        }
    } // namespace DecompressionMethods__Enum
} // namespace app::classes::types
