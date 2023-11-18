#pragma once
#include <Modloader/app/structs/LoadHint__Enum.h>
#include <Modloader/app/structs/LoadHint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadHint__Enum {
        inline app::LoadHint__Enum__Class** type_info() {
            static app::LoadHint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadHint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadHint__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadHint__Enum__Class>(type_info(), "System.Runtime.CompilerServices", "LoadHint");
        }
        inline app::LoadHint__Enum* create() {
            return il2cpp::create_object<app::LoadHint__Enum>(get_class());
        }
    } // namespace LoadHint__Enum
} // namespace app::classes::types
