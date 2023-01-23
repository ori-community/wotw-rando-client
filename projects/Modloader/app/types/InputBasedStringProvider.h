#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InputBasedStringProvider__Class.h>
#include <Modloader/app/structs/InputBasedStringProvider.h>

namespace app::classes::types {
    namespace InputBasedStringProvider {
        namespace {
            inline app::InputBasedStringProvider__Class* type_info_ref = nullptr;
        }
        inline app::InputBasedStringProvider__Class** type_info = &type_info_ref;
        inline app::InputBasedStringProvider__Class* get_class() {
            return il2cpp::get_class<app::InputBasedStringProvider__Class>(type_info, "", "InputBasedStringProvider");
        }
        inline app::InputBasedStringProvider* create() {
            return il2cpp::create_object<app::InputBasedStringProvider>(get_class());
        }
    } // namespace InputBasedStringProvider
} // namespace app::classes::types
