#pragma once
#include <Modloader/app/structs/Input_Command__Enum__Array.h>
#include <Modloader/app/structs/Input_Command__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Input_Command__Enum__Array {
        inline app::Input_Command__Enum__Array__Class** type_info() {
            static app::Input_Command__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Input_Command__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04715E28));
            }
            return cache;
        }
        inline app::Input_Command__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Input_Command__Enum__Array__Class>(type_info(), "Core", "Input+Command[]");
        }
        inline app::Input_Command__Enum__Array* create() {
            return il2cpp::create_object<app::Input_Command__Enum__Array>(get_class());
        }
    } // namespace Input_Command__Enum__Array
} // namespace app::classes::types
