#pragma once
#include <Modloader/app/structs/LoadingBootstrap_c_DisplayClass23_0.h>
#include <Modloader/app/structs/LoadingBootstrap_c_DisplayClass23_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap_c_DisplayClass23_0 {
        inline app::LoadingBootstrap_c_DisplayClass23_0__Class** type_info() {
            static app::LoadingBootstrap_c_DisplayClass23_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBootstrap_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x0472B998));
            }
            return cache;
        }
        inline app::LoadingBootstrap_c_DisplayClass23_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_c_DisplayClass23_0__Class>(type_info(), "", "LoadingBootstrap", "<>c__DisplayClass23_0");
        }
        inline app::LoadingBootstrap_c_DisplayClass23_0* create() {
            return il2cpp::create_object<app::LoadingBootstrap_c_DisplayClass23_0>(get_class());
        }
    } // namespace LoadingBootstrap_c_DisplayClass23_0
} // namespace app::classes::types
