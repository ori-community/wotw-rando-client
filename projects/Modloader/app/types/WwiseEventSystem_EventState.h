#pragma once
#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#include <Modloader/app/structs/WwiseEventSystem_EventState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_EventState {
        inline app::WwiseEventSystem_EventState__Class** type_info() {
            static app::WwiseEventSystem_EventState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseEventSystem_EventState__Class**)(modloader::win::memory::resolve_rva(0x04791A90));
            }
            return cache;
        }
        inline app::WwiseEventSystem_EventState__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_EventState__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem", "EventState");
        }
        inline app::WwiseEventSystem_EventState* create() {
            return il2cpp::create_object<app::WwiseEventSystem_EventState>(get_class());
        }
    } // namespace WwiseEventSystem_EventState
} // namespace app::classes::types
