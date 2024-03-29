#pragma once
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/Input_Command__Enum__Array.h>
#include <Modloader/app/structs/Input_Command__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Input_Command__Enum {
        inline app::Input_Command__Enum__Class** type_info() {
            static app::Input_Command__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Input_Command__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740E28));
            }
            return cache;
        }
        inline app::Input_Command__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Command__Enum__Class>(type_info(), "Core", "Input", "Command");
        }
        inline app::Input_Command__Enum* create() {
            return il2cpp::create_object<app::Input_Command__Enum>(get_class());
        }
        inline app::Input_Command__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Input_Command__Enum__Array>(get_class(), size);
        }
        inline app::Input_Command__Enum__Array* create_array(const std::vector<app::Input_Command__Enum*>& items) {
            return il2cpp::array_new<app::Input_Command__Enum__Array>(get_class(), items);
        }
    } // namespace Input_Command__Enum
} // namespace app::classes::types
