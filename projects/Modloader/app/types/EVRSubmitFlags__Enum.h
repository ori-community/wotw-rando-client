#pragma once
#include <Modloader/app/structs/EVRSubmitFlags__Enum.h>
#include <Modloader/app/structs/EVRSubmitFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRSubmitFlags__Enum {
        inline app::EVRSubmitFlags__Enum__Class** type_info() {
            static app::EVRSubmitFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRSubmitFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C5F8));
            }
            return cache;
        }
        inline app::EVRSubmitFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRSubmitFlags__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRSubmitFlags");
        }
        inline app::EVRSubmitFlags__Enum* create() {
            return il2cpp::create_object<app::EVRSubmitFlags__Enum>(get_class());
        }
    } // namespace EVRSubmitFlags__Enum
} // namespace app::classes::types
