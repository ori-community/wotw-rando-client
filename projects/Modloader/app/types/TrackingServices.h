#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrackingServices__Class.h>
#include <Modloader/app/structs/TrackingServices.h>

namespace app::classes::types {
    namespace TrackingServices {
        inline app::TrackingServices__Class** type_info = (app::TrackingServices__Class**)(modloader::win::memory::resolve_rva(0x0478E518));
        inline app::TrackingServices__Class* get_class() {
            return il2cpp::get_class<app::TrackingServices__Class>(type_info, "System.Runtime.Remoting.Services", "TrackingServices");
        }
        inline app::TrackingServices* create() {
            return il2cpp::create_object<app::TrackingServices>(get_class());
        }
    } // namespace TrackingServices
} // namespace app::classes::types
