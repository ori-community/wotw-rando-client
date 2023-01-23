#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformStreamHandle__Class.h>
#include <Modloader/app/structs/TransformStreamHandle.h>
#include <Modloader/app/structs/TransformStreamHandle__Boxed.h>
#include <Modloader/app/structs/TransformStreamHandle__Array.h>

namespace app::classes::types {
    namespace TransformStreamHandle {
        namespace {
            inline app::TransformStreamHandle__Class* type_info_ref = nullptr;
        }
        inline app::TransformStreamHandle__Class** type_info = &type_info_ref;
        inline app::TransformStreamHandle__Class* get_class() {
            return il2cpp::get_class<app::TransformStreamHandle__Class>(type_info, "UnityEngine.Experimental.Animations", "TransformStreamHandle");
        }
        inline app::TransformStreamHandle* create() {
            return il2cpp::create_object<app::TransformStreamHandle>(get_class());
        }
        inline app::TransformStreamHandle__Boxed* box(app::TransformStreamHandle value) {
            return il2cpp::box_value<app::TransformStreamHandle__Boxed>(get_class(), value);
        }
        inline app::TransformStreamHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::TransformStreamHandle__Array>(get_class(), size);
        }
        inline app::TransformStreamHandle__Array* create_array(const std::vector<app::TransformStreamHandle>& items) {
            return il2cpp::array_new<app::TransformStreamHandle__Array>(get_class(), items);
        }
    } // namespace TransformStreamHandle
} // namespace app::classes::types
