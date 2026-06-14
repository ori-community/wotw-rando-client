#pragma once
#include <Modloader/app/structs/GameTimeExtensions_ExecuteAfterAsync_d_1.h>
#include <Modloader/app/structs/GameTimeExtensions_ExecuteAfterAsync_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameTimeExtensions_ExecuteAfterAsync_d_1 {
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class** type_info() {
            static app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class**)(modloader::win::memory::resolve_rva(0x047135C0));
            }
            return cache;
        }
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class>(type_info(), "", "GameTimeExtensions", "<ExecuteAfterAsync>d__1");
        }
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1* create() {
            return il2cpp::create_object<app::GameTimeExtensions_ExecuteAfterAsync_d_1>(get_class());
        }
    } // namespace GameTimeExtensions_ExecuteAfterAsync_d_1
} // namespace app::classes::types
