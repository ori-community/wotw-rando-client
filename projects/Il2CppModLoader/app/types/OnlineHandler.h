#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnlineHandler {
        namespace {
            inline app::OnlineHandler__Class* type_info_ref = nullptr;
        }
        inline app::OnlineHandler__Class** type_info = &type_info_ref;
        inline app::OnlineHandler__Class* get_class() {
            return il2cpp::get_class<app::OnlineHandler__Class>(type_info, "", "OnlineHandler");
        }
        inline app::OnlineHandler* create() {
            return il2cpp::create_object<app::OnlineHandler>(get_class());
        }
    } // namespace OnlineHandler
} // namespace app::classes::types
