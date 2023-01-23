#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Array__Class.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Array.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_ObjectData__Array {
        namespace {
            inline app::LeakedSceneObjectDetector_ObjectData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array__Class** type_info = &type_info_ref;
        inline app::LeakedSceneObjectDetector_ObjectData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeakedSceneObjectDetector_ObjectData__Array__Class>(type_info, "", "LeakedSceneObjectDetector+ObjectData[]");
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_ObjectData__Array>(get_class());
        }
    } // namespace LeakedSceneObjectDetector_ObjectData__Array
} // namespace app::classes::types
