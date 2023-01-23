#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Gradients_Stripe__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Gradients_Stripe.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_Stripe {
        namespace {
            inline app::CameraFilterPack_Gradients_Stripe__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Gradients_Stripe__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_Stripe__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_Stripe__Class>(type_info, "", "CameraFilterPack_Gradients_Stripe");
        }
        inline app::CameraFilterPack_Gradients_Stripe* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_Stripe>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_Stripe
} // namespace app::classes::types
