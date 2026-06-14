#pragma once
#include <Modloader/app/structs/GameMapUI_c_DisplayClass187_0.h>
#include <Modloader/app/structs/GameMapUI_c_DisplayClass187_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapUI_c_DisplayClass187_0 {
        inline app::GameMapUI_c_DisplayClass187_0__Class** type_info() {
            static app::GameMapUI_c_DisplayClass187_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameMapUI_c_DisplayClass187_0__Class**)(modloader::win::memory::resolve_rva(0x047267A0));
            }
            return cache;
        }
        inline app::GameMapUI_c_DisplayClass187_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_c_DisplayClass187_0__Class>(type_info(), "", "GameMapUI", "<>c__DisplayClass187_0");
        }
        inline app::GameMapUI_c_DisplayClass187_0* create() {
            return il2cpp::create_object<app::GameMapUI_c_DisplayClass187_0>(get_class());
        }
    } // namespace GameMapUI_c_DisplayClass187_0
} // namespace app::classes::types
