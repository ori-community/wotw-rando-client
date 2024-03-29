#pragma once
#include <Modloader/app/structs/ServerTransform_TransformData.h>
#include <Modloader/app/structs/ServerTransform_TransformData__Boxed.h>
#include <Modloader/app/structs/ServerTransform_TransformData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerTransform_TransformData {
        inline app::ServerTransform_TransformData__Class** type_info() {
            static app::ServerTransform_TransformData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerTransform_TransformData__Class**)(modloader::win::memory::resolve_rva(0x047307E8));
            }
            return cache;
        }
        inline app::ServerTransform_TransformData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerTransform_TransformData__Class>(type_info(), "", "ServerTransform", "TransformData");
        }
        inline app::ServerTransform_TransformData* create() {
            return il2cpp::create_object<app::ServerTransform_TransformData>(get_class());
        }
        inline app::ServerTransform_TransformData__Boxed* box(app::ServerTransform_TransformData value) {
            return il2cpp::box_value<app::ServerTransform_TransformData__Boxed>(get_class(), value);
        }
    } // namespace ServerTransform_TransformData
} // namespace app::classes::types
