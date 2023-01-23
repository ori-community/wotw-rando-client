#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MessageBoxMessageScreen__Class.h>
#include <Modloader/app/structs/MessageBoxMessageScreen.h>

namespace app::classes::types {
    namespace MessageBoxMessageScreen {
        namespace {
            inline app::MessageBoxMessageScreen__Class* type_info_ref = nullptr;
        }
        inline app::MessageBoxMessageScreen__Class** type_info = &type_info_ref;
        inline app::MessageBoxMessageScreen__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxMessageScreen__Class>(type_info, "", "MessageBoxMessageScreen");
        }
        inline app::MessageBoxMessageScreen* create() {
            return il2cpp::create_object<app::MessageBoxMessageScreen>(get_class());
        }
    } // namespace MessageBoxMessageScreen
} // namespace app::classes::types
