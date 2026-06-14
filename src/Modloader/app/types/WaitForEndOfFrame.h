#pragma once
#include <Modloader/app/structs/WaitForEndOfFrame.h>
#include <Modloader/app/structs/WaitForEndOfFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForEndOfFrame {
        inline app::WaitForEndOfFrame__Class** type_info() {
            static app::WaitForEndOfFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitForEndOfFrame__Class**)(modloader::win::memory::resolve_rva(0x04798B48));
            }
            return cache;
        }
        inline app::WaitForEndOfFrame__Class* get_class() {
            return il2cpp::get_class<app::WaitForEndOfFrame__Class>(type_info(), "UnityEngine", "WaitForEndOfFrame");
        }
        inline app::WaitForEndOfFrame* create() {
            return il2cpp::create_object<app::WaitForEndOfFrame>(get_class());
        }
    } // namespace WaitForEndOfFrame
} // namespace app::classes::types
