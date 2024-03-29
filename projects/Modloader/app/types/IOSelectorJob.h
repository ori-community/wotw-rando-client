#pragma once
#include <Modloader/app/structs/IOSelectorJob.h>
#include <Modloader/app/structs/IOSelectorJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOSelectorJob {
        inline app::IOSelectorJob__Class** type_info() {
            static app::IOSelectorJob__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IOSelectorJob__Class**)(modloader::win::memory::resolve_rva(0x04777918));
            }
            return cache;
        }
        inline app::IOSelectorJob__Class* get_class() {
            return il2cpp::get_class<app::IOSelectorJob__Class>(type_info(), "System", "IOSelectorJob");
        }
        inline app::IOSelectorJob* create() {
            return il2cpp::create_object<app::IOSelectorJob>(get_class());
        }
    } // namespace IOSelectorJob
} // namespace app::classes::types
