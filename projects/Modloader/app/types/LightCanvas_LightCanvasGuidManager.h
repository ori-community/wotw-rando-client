#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasGuidManager__Class.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasGuidManager.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasGuidManager {
        inline app::LightCanvas_LightCanvasGuidManager__Class** type_info = (app::LightCanvas_LightCanvasGuidManager__Class**)(modloader::win::memory::resolve_rva(0x04784A08));
        inline app::LightCanvas_LightCanvasGuidManager__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_LightCanvasGuidManager__Class>(type_info, "", "LightCanvas", "LightCanvasGuidManager");
        }
        inline app::LightCanvas_LightCanvasGuidManager* create() {
            return il2cpp::create_object<app::LightCanvas_LightCanvasGuidManager>(get_class());
        }
    } // namespace LightCanvas_LightCanvasGuidManager
} // namespace app::classes::types
