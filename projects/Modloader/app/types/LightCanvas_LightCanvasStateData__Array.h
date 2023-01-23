#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Array__Class.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Array.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasStateData__Array {
        namespace {
            inline app::LightCanvas_LightCanvasStateData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvas_LightCanvasStateData__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvas_LightCanvasStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas_LightCanvasStateData__Array__Class>(type_info, "", "LightCanvas+LightCanvasStateData[]");
        }
        inline app::LightCanvas_LightCanvasStateData__Array* create() {
            return il2cpp::create_object<app::LightCanvas_LightCanvasStateData__Array>(get_class());
        }
    } // namespace LightCanvas_LightCanvasStateData__Array
} // namespace app::classes::types
