#pragma once
#include <Modloader/app/structs/PointCloudUpdatedEventArgs.h>
#include <Modloader/app/structs/PointCloudUpdatedEventArgs__Boxed.h>
#include <Modloader/app/structs/PointCloudUpdatedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointCloudUpdatedEventArgs {
        inline app::PointCloudUpdatedEventArgs__Class** type_info() {
            static app::PointCloudUpdatedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PointCloudUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047045B8));
            }
            return cache;
        }
        inline app::PointCloudUpdatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PointCloudUpdatedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "PointCloudUpdatedEventArgs");
        }
        inline app::PointCloudUpdatedEventArgs* create() {
            return il2cpp::create_object<app::PointCloudUpdatedEventArgs>(get_class());
        }
        inline app::PointCloudUpdatedEventArgs__Boxed* box(app::PointCloudUpdatedEventArgs value) {
            return il2cpp::box_value<app::PointCloudUpdatedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PointCloudUpdatedEventArgs
} // namespace app::classes::types
