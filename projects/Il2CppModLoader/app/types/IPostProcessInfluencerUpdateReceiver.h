#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPostProcessInfluencerUpdateReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPostProcessInfluencerUpdateReceiver__Class** type_info;
        inline app::IPostProcessInfluencerUpdateReceiver__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencerUpdateReceiver__Class>(type_info, "", "IPostProcessInfluencerUpdateReceiver");
        }
        inline app::IPostProcessInfluencerUpdateReceiver* create() {
            return il2cpp::create_object<app::IPostProcessInfluencerUpdateReceiver>(get_class());
        }
    } // namespace IPostProcessInfluencerUpdateReceiver
} // namespace app::classes::types
