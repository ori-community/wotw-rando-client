#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsPropertyWrongTypeException__Class.h>
#include <Modloader/app/structs/SettingsPropertyWrongTypeException.h>

namespace app::classes::types {
    namespace SettingsPropertyWrongTypeException {
        namespace {
            inline app::SettingsPropertyWrongTypeException__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyWrongTypeException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyWrongTypeException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyWrongTypeException__Class>(type_info, "System.Configuration", "SettingsPropertyWrongTypeException");
        }
        inline app::SettingsPropertyWrongTypeException* create() {
            return il2cpp::create_object<app::SettingsPropertyWrongTypeException>(get_class());
        }
    } // namespace SettingsPropertyWrongTypeException
} // namespace app::classes::types
