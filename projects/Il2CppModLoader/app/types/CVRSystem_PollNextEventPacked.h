#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_PollNextEventPacked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRSystem_PollNextEventPacked__Class** type_info;
        inline app::CVRSystem_PollNextEventPacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_PollNextEventPacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_PollNextEventPacked");
        }
        inline app::CVRSystem_PollNextEventPacked* create() {
            return il2cpp::create_object<app::CVRSystem_PollNextEventPacked>(get_class());
        }
    } // namespace CVRSystem_PollNextEventPacked
} // namespace app::classes::types
