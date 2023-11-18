#pragma once
#include <Modloader/app/structs/UberStateTestHookUp.h>
#include <Modloader/app/structs/UberStateTestHookUp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateTestHookUp {
        inline app::UberStateTestHookUp__Class** type_info() {
            static app::UberStateTestHookUp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateTestHookUp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateTestHookUp__Class* get_class() {
            return il2cpp::get_class<app::UberStateTestHookUp__Class>(type_info(), "", "UberStateTestHookUp");
        }
        inline app::UberStateTestHookUp* create() {
            return il2cpp::create_object<app::UberStateTestHookUp>(get_class());
        }
    } // namespace UberStateTestHookUp
} // namespace app::classes::types
