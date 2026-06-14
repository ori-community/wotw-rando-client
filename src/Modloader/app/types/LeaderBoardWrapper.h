#pragma once
#include <Modloader/app/structs/LeaderBoardWrapper.h>
#include <Modloader/app/structs/LeaderBoardWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardWrapper {
        inline app::LeaderBoardWrapper__Class** type_info() {
            static app::LeaderBoardWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderBoardWrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderBoardWrapper__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardWrapper__Class>(type_info(), "Moon.Race", "LeaderBoardWrapper");
        }
        inline app::LeaderBoardWrapper* create() {
            return il2cpp::create_object<app::LeaderBoardWrapper>(get_class());
        }
    } // namespace LeaderBoardWrapper
} // namespace app::classes::types
