#pragma once
#include <Modloader/app/structs/TermInfoNumbers__Enum.h>
#include <Modloader/app/structs/TermInfoNumbers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TermInfoNumbers__Enum {
        inline app::TermInfoNumbers__Enum__Class** type_info() {
            static app::TermInfoNumbers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TermInfoNumbers__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TermInfoNumbers__Enum__Class* get_class() {
            return il2cpp::get_class<app::TermInfoNumbers__Enum__Class>(type_info(), "System", "TermInfoNumbers");
        }
        inline app::TermInfoNumbers__Enum* create() {
            return il2cpp::create_object<app::TermInfoNumbers__Enum>(get_class());
        }
    } // namespace TermInfoNumbers__Enum
} // namespace app::classes::types
