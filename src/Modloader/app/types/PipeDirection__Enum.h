#pragma once
#include <Modloader/app/structs/PipeDirection__Enum.h>
#include <Modloader/app/structs/PipeDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PipeDirection__Enum {
        inline app::PipeDirection__Enum__Class** type_info() {
            static app::PipeDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PipeDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PipeDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeDirection__Enum__Class>(type_info(), "System.IO.Pipes", "PipeDirection");
        }
        inline app::PipeDirection__Enum* create() {
            return il2cpp::create_object<app::PipeDirection__Enum>(get_class());
        }
    } // namespace PipeDirection__Enum
} // namespace app::classes::types
