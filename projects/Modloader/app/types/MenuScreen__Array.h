#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MenuScreen__Array__Class.h>
#include <Modloader/app/structs/MenuScreen__Array.h>

namespace app::classes::types {
    namespace MenuScreen__Array {
        namespace {
            inline app::MenuScreen__Array__Class* type_info_ref = nullptr;
        }
        inline app::MenuScreen__Array__Class** type_info = &type_info_ref;
        inline app::MenuScreen__Array__Class* get_class() {
            return il2cpp::get_class<app::MenuScreen__Array__Class>(type_info, "", "MenuScreen[]");
        }
        inline app::MenuScreen__Array* create() {
            return il2cpp::create_object<app::MenuScreen__Array>(get_class());
        }
    } // namespace MenuScreen__Array
} // namespace app::classes::types
