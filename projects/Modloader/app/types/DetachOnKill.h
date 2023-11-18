#pragma once
#include <Modloader/app/structs/DetachOnKill.h>
#include <Modloader/app/structs/DetachOnKill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DetachOnKill {
        inline app::DetachOnKill__Class** type_info() {
            static app::DetachOnKill__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DetachOnKill__Class**)(modloader::win::memory::resolve_rva(0x04757E98));
            }
            return cache;
        }
        inline app::DetachOnKill__Class* get_class() {
            return il2cpp::get_class<app::DetachOnKill__Class>(type_info(), "", "DetachOnKill");
        }
        inline app::DetachOnKill* create() {
            return il2cpp::create_object<app::DetachOnKill>(get_class());
        }
    } // namespace DetachOnKill
} // namespace app::classes::types
