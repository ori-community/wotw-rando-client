#pragma once
#include <Modloader/app/structs/MaskedTextResultHint__Enum.h>
#include <Modloader/app/structs/MaskedTextResultHint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskedTextResultHint__Enum {
        inline app::MaskedTextResultHint__Enum__Class** type_info() {
            static app::MaskedTextResultHint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskedTextResultHint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskedTextResultHint__Enum__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextResultHint__Enum__Class>(type_info(), "System.ComponentModel", "MaskedTextResultHint");
        }
        inline app::MaskedTextResultHint__Enum* create() {
            return il2cpp::create_object<app::MaskedTextResultHint__Enum>(get_class());
        }
    } // namespace MaskedTextResultHint__Enum
} // namespace app::classes::types
