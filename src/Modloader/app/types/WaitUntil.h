#pragma once
#include <Modloader/app/structs/WaitUntil.h>
#include <Modloader/app/structs/WaitUntil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitUntil {
        inline app::WaitUntil__Class** type_info() {
            static app::WaitUntil__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitUntil__Class**)(modloader::win::memory::resolve_rva(0x04768F08));
            }
            return cache;
        }
        inline app::WaitUntil__Class* get_class() {
            return il2cpp::get_class<app::WaitUntil__Class>(type_info(), "UnityEngine", "WaitUntil");
        }
        inline app::WaitUntil* create() {
            return il2cpp::create_object<app::WaitUntil>(get_class());
        }
    } // namespace WaitUntil
} // namespace app::classes::types
