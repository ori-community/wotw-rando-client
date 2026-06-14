#pragma once
#include <Modloader/app/structs/LoadingBootstrap_OnEndOfFrame_d_34.h>
#include <Modloader/app/structs/LoadingBootstrap_OnEndOfFrame_d_34__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap_OnEndOfFrame_d_34 {
        inline app::LoadingBootstrap_OnEndOfFrame_d_34__Class** type_info() {
            static app::LoadingBootstrap_OnEndOfFrame_d_34__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBootstrap_OnEndOfFrame_d_34__Class**)(modloader::win::memory::resolve_rva(0x04751070));
            }
            return cache;
        }
        inline app::LoadingBootstrap_OnEndOfFrame_d_34__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_OnEndOfFrame_d_34__Class>(type_info(), "", "LoadingBootstrap", "<OnEndOfFrame>d__34");
        }
        inline app::LoadingBootstrap_OnEndOfFrame_d_34* create() {
            return il2cpp::create_object<app::LoadingBootstrap_OnEndOfFrame_d_34>(get_class());
        }
    } // namespace LoadingBootstrap_OnEndOfFrame_d_34
} // namespace app::classes::types
