#pragma once
#include <Modloader/app/structs/LoadingBootstrap.h>
#include <Modloader/app/structs/LoadingBootstrap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap {
        inline app::LoadingBootstrap__Class** type_info() {
            static app::LoadingBootstrap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBootstrap__Class**)(modloader::win::memory::resolve_rva(0x0478B858));
            }
            return cache;
        }
        inline app::LoadingBootstrap__Class* get_class() {
            return il2cpp::get_class<app::LoadingBootstrap__Class>(type_info(), "", "LoadingBootstrap");
        }
        inline app::LoadingBootstrap* create() {
            return il2cpp::create_object<app::LoadingBootstrap>(get_class());
        }
    } // namespace LoadingBootstrap
} // namespace app::classes::types
