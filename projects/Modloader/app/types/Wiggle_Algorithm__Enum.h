#pragma once
#include <Modloader/app/structs/Wiggle_Algorithm__Enum.h>
#include <Modloader/app/structs/Wiggle_Algorithm__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wiggle_Algorithm__Enum {
        inline app::Wiggle_Algorithm__Enum__Class** type_info() {
            static app::Wiggle_Algorithm__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Wiggle_Algorithm__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Wiggle_Algorithm__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Wiggle_Algorithm__Enum__Class>(type_info(), "Colorful", "Wiggle", "Algorithm");
        }
        inline app::Wiggle_Algorithm__Enum* create() {
            return il2cpp::create_object<app::Wiggle_Algorithm__Enum>(get_class());
        }
    } // namespace Wiggle_Algorithm__Enum
} // namespace app::classes::types
