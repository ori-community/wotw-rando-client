#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneScreenshot__Array__Class.h>
#include <Modloader/app/structs/SceneScreenshot__Array.h>

namespace app::classes::types {
    namespace SceneScreenshot__Array {
        namespace {
            inline app::SceneScreenshot__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneScreenshot__Array__Class** type_info = &type_info_ref;
        inline app::SceneScreenshot__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot__Array__Class>(type_info, "", "SceneScreenshot[]");
        }
        inline app::SceneScreenshot__Array* create() {
            return il2cpp::create_object<app::SceneScreenshot__Array>(get_class());
        }
    } // namespace SceneScreenshot__Array
} // namespace app::classes::types
