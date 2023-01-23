#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogicUtility__Class.h>
#include <Modloader/app/structs/LogicUtility.h>

namespace app::classes::types {
    namespace LogicUtility {
        namespace {
            inline app::LogicUtility__Class* type_info_ref = nullptr;
        }
        inline app::LogicUtility__Class** type_info = &type_info_ref;
        inline app::LogicUtility__Class* get_class() {
            return il2cpp::get_class<app::LogicUtility__Class>(type_info, "", "LogicUtility");
        }
        inline app::LogicUtility* create() {
            return il2cpp::create_object<app::LogicUtility>(get_class());
        }
    } // namespace LogicUtility
} // namespace app::classes::types
