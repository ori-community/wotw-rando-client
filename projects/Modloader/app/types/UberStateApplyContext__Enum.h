#pragma once
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateApplyContext__Enum {
        inline app::UberStateApplyContext__Enum__Class** type_info() {
            static app::UberStateApplyContext__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateApplyContext__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateApplyContext__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberStateApplyContext__Enum__Class>(type_info(), "Moon", "UberStateApplyContext");
        }
        inline app::UberStateApplyContext__Enum* create() {
            return il2cpp::create_object<app::UberStateApplyContext__Enum>(get_class());
        }
    } // namespace UberStateApplyContext__Enum
} // namespace app::classes::types
