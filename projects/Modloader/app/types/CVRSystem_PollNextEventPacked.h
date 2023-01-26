#pragma once
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked.h>
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_PollNextEventPacked {
        inline app::CVRSystem_PollNextEventPacked__Class** type_info() {
            static app::CVRSystem_PollNextEventPacked__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRSystem_PollNextEventPacked__Class**)(modloader::win::memory::resolve_rva(0x04743A20));
            }
            return cache;
        }
        inline app::CVRSystem_PollNextEventPacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_PollNextEventPacked__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "_PollNextEventPacked");
        }
        inline app::CVRSystem_PollNextEventPacked* create() {
            return il2cpp::create_object<app::CVRSystem_PollNextEventPacked>(get_class());
        }
    } // namespace CVRSystem_PollNextEventPacked
} // namespace app::classes::types
