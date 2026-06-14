#pragma once
#include <Modloader/app/structs/NormalizationCheck__Enum.h>
#include <Modloader/app/structs/NormalizationCheck__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NormalizationCheck__Enum {
        inline app::NormalizationCheck__Enum__Class** type_info() {
            static app::NormalizationCheck__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NormalizationCheck__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NormalizationCheck__Enum__Class* get_class() {
            return il2cpp::get_class<app::NormalizationCheck__Enum__Class>(type_info(), "System.Text", "NormalizationCheck");
        }
        inline app::NormalizationCheck__Enum* create() {
            return il2cpp::create_object<app::NormalizationCheck__Enum>(get_class());
        }
    } // namespace NormalizationCheck__Enum
} // namespace app::classes::types
