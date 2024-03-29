#pragma once
#include <Modloader/app/structs/ForceGrabReleaseZone.h>
#include <Modloader/app/structs/ForceGrabReleaseZone__Array.h>
#include <Modloader/app/structs/ForceGrabReleaseZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceGrabReleaseZone {
        inline app::ForceGrabReleaseZone__Class** type_info() {
            static app::ForceGrabReleaseZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ForceGrabReleaseZone__Class**)(modloader::win::memory::resolve_rva(0x04715B30));
            }
            return cache;
        }
        inline app::ForceGrabReleaseZone__Class* get_class() {
            return il2cpp::get_class<app::ForceGrabReleaseZone__Class>(type_info(), "", "ForceGrabReleaseZone");
        }
        inline app::ForceGrabReleaseZone* create() {
            return il2cpp::create_object<app::ForceGrabReleaseZone>(get_class());
        }
        inline app::ForceGrabReleaseZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ForceGrabReleaseZone__Array>(get_class(), size);
        }
        inline app::ForceGrabReleaseZone__Array* create_array(const std::vector<app::ForceGrabReleaseZone*>& items) {
            return il2cpp::array_new<app::ForceGrabReleaseZone__Array>(get_class(), items);
        }
    } // namespace ForceGrabReleaseZone
} // namespace app::classes::types
