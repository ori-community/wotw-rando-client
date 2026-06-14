#pragma once
#include <Modloader/app/structs/LoadingBootstrap_c.h>
#include <Modloader/app/structs/LoadingBootstrap_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap_c {
        inline app::LoadingBootstrap_c__Class** type_info() {
            static app::LoadingBootstrap_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBootstrap_c__Class**)(modloader::win::memory::resolve_rva(0x04761F70));
            }
            return cache;
        }
        inline app::LoadingBootstrap_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_c__Class>(type_info(), "", "LoadingBootstrap", "<>c");
        }
        inline app::LoadingBootstrap_c* create() {
            return il2cpp::create_object<app::LoadingBootstrap_c>(get_class());
        }
    } // namespace LoadingBootstrap_c
} // namespace app::classes::types
