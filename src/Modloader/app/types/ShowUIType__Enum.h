#pragma once
#include <Modloader/app/structs/ShowUIType__Enum.h>
#include <Modloader/app/structs/ShowUIType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowUIType__Enum {
        inline app::ShowUIType__Enum__Class** type_info() {
            static app::ShowUIType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowUIType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753F20));
            }
            return cache;
        }
        inline app::ShowUIType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShowUIType__Enum__Class>(type_info(), "", "ShowUIType");
        }
        inline app::ShowUIType__Enum* create() {
            return il2cpp::create_object<app::ShowUIType__Enum>(get_class());
        }
    } // namespace ShowUIType__Enum
} // namespace app::classes::types
