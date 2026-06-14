#pragma once
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/DifficultyMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyMode__Enum {
        inline app::DifficultyMode__Enum__Class** type_info() {
            static app::DifficultyMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DifficultyMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047210F8));
            }
            return cache;
        }
        inline app::DifficultyMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DifficultyMode__Enum__Class>(type_info(), "", "DifficultyMode");
        }
        inline app::DifficultyMode__Enum* create() {
            return il2cpp::create_object<app::DifficultyMode__Enum>(get_class());
        }
    } // namespace DifficultyMode__Enum
} // namespace app::classes::types
