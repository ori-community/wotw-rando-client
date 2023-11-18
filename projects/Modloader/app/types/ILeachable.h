#pragma once
#include <Modloader/app/structs/ILeachable.h>
#include <Modloader/app/structs/ILeachable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILeachable {
        inline app::ILeachable__Class** type_info() {
            static app::ILeachable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILeachable__Class**)(modloader::win::memory::resolve_rva(0x0473D450));
            }
            return cache;
        }
        inline app::ILeachable__Class* get_class() {
            return il2cpp::get_class<app::ILeachable__Class>(type_info(), "", "ILeachable");
        }
    } // namespace ILeachable
} // namespace app::classes::types
