#pragma once
#include <Modloader/app/structs/EarlyUpdate_RendererNotifyInvisible.h>
#include <Modloader/app/structs/EarlyUpdate_RendererNotifyInvisible__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_RendererNotifyInvisible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_RendererNotifyInvisible {
        inline app::EarlyUpdate_RendererNotifyInvisible__Class** type_info() {
            static app::EarlyUpdate_RendererNotifyInvisible__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_RendererNotifyInvisible__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_RendererNotifyInvisible__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_RendererNotifyInvisible__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "RendererNotifyInvisible");
        }
        inline app::EarlyUpdate_RendererNotifyInvisible* create() {
            return il2cpp::create_object<app::EarlyUpdate_RendererNotifyInvisible>(get_class());
        }
        inline app::EarlyUpdate_RendererNotifyInvisible__Boxed* box(app::EarlyUpdate_RendererNotifyInvisible value) {
            return il2cpp::box_value<app::EarlyUpdate_RendererNotifyInvisible__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_RendererNotifyInvisible
} // namespace app::classes::types
