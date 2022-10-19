#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderBoardWrapper {
        namespace {
            inline app::LeaderBoardWrapper__Class* type_info_ref = nullptr;
        }
        inline app::LeaderBoardWrapper__Class** type_info = &type_info_ref;
        inline app::LeaderBoardWrapper__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardWrapper__Class>(type_info, "Moon.Race", "LeaderBoardWrapper");
        }
        inline app::LeaderBoardWrapper* create() {
            return il2cpp::create_object<app::LeaderBoardWrapper>(get_class());
        }
    } // namespace LeaderBoardWrapper
} // namespace app::classes::types
