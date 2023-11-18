#pragma once
#include <Modloader/app/structs/PipeOptions__Enum.h>
#include <Modloader/app/structs/PipeOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PipeOptions__Enum {
        inline app::PipeOptions__Enum__Class** type_info() {
            static app::PipeOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PipeOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PipeOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeOptions__Enum__Class>(type_info(), "System.IO.Pipes", "PipeOptions");
        }
        inline app::PipeOptions__Enum* create() {
            return il2cpp::create_object<app::PipeOptions__Enum>(get_class());
        }
    } // namespace PipeOptions__Enum
} // namespace app::classes::types
