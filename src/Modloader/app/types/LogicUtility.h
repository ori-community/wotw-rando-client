#pragma once
#include <Modloader/app/structs/LogicUtility.h>
#include <Modloader/app/structs/LogicUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogicUtility {
        inline app::LogicUtility__Class** type_info() {
            static app::LogicUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogicUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogicUtility__Class* get_class() {
            return il2cpp::get_class<app::LogicUtility__Class>(type_info(), "", "LogicUtility");
        }
        inline app::LogicUtility* create() {
            return il2cpp::create_object<app::LogicUtility>(get_class());
        }
    } // namespace LogicUtility
} // namespace app::classes::types
