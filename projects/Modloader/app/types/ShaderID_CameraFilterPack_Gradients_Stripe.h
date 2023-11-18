#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Stripe.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Gradients_Stripe__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_Stripe {
        inline app::ShaderID_CameraFilterPack_Gradients_Stripe__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Gradients_Stripe__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Gradients_Stripe__Class**)(modloader::win::memory::resolve_rva(0x04764DD0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Stripe__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_Stripe__Class>(type_info(), "", "ShaderID_CameraFilterPack_Gradients_Stripe");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Stripe* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_Stripe>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_Stripe
} // namespace app::classes::types
