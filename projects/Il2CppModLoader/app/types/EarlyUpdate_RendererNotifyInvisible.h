#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_RendererNotifyInvisible {
        namespace {
            inline app::EarlyUpdate_RendererNotifyInvisible__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_RendererNotifyInvisible__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_RendererNotifyInvisible__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_RendererNotifyInvisible__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "RendererNotifyInvisible");
        }
        inline app::EarlyUpdate_RendererNotifyInvisible* create() {
            return il2cpp::create_object<app::EarlyUpdate_RendererNotifyInvisible>(get_class());
        }
        inline app::EarlyUpdate_RendererNotifyInvisible__Boxed* box(app::EarlyUpdate_RendererNotifyInvisible value) {
            return il2cpp::box_value<app::EarlyUpdate_RendererNotifyInvisible__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_RendererNotifyInvisible
} // namespace app::classes::types
