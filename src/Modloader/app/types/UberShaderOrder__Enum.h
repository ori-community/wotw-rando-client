#pragma once
#include <Modloader/app/structs/UberShaderOrder__Enum.h>
#include <Modloader/app/structs/UberShaderOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderOrder__Enum {
        inline app::UberShaderOrder__Enum__Class** type_info() {
            static app::UberShaderOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderOrder__Enum__Class>(type_info(), "", "UberShaderOrder");
        }
        inline app::UberShaderOrder__Enum* create() {
            return il2cpp::create_object<app::UberShaderOrder__Enum>(get_class());
        }
    } // namespace UberShaderOrder__Enum
} // namespace app::classes::types
