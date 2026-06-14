#pragma once
#include <Modloader/app/structs/ProcessStartInfo.h>
#include <Modloader/app/structs/ProcessStartInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessStartInfo {
        inline app::ProcessStartInfo__Class** type_info() {
            static app::ProcessStartInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProcessStartInfo__Class**)(modloader::win::memory::resolve_rva(0x04702480));
            }
            return cache;
        }
        inline app::ProcessStartInfo__Class* get_class() {
            return il2cpp::get_class<app::ProcessStartInfo__Class>(type_info(), "System.Diagnostics", "ProcessStartInfo");
        }
        inline app::ProcessStartInfo* create() {
            return il2cpp::create_object<app::ProcessStartInfo>(get_class());
        }
    } // namespace ProcessStartInfo
} // namespace app::classes::types
