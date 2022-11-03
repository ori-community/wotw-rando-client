#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformStreamHandle__Array {
        namespace {
            inline app::TransformStreamHandle__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransformStreamHandle__Array__Class** type_info = &type_info_ref;
        inline app::TransformStreamHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformStreamHandle__Array__Class>(type_info, "UnityEngine.Experimental.Animations", "TransformStreamHandle[]");
        }
        inline app::TransformStreamHandle__Array* create() {
            return il2cpp::create_object<app::TransformStreamHandle__Array>(get_class());
        }
    } // namespace TransformStreamHandle__Array
} // namespace app::classes::types
