#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUITexture__Class.h>
#include <Modloader/app/structs/GUITexture.h>

namespace app::classes::types {
    namespace GUITexture {
        inline app::GUITexture__Class** type_info = (app::GUITexture__Class**)(modloader::win::memory::resolve_rva(0x0471C480));
        inline app::GUITexture__Class* get_class() {
            return il2cpp::get_class<app::GUITexture__Class>(type_info, "UnityEngine", "GUITexture");
        }
        inline app::GUITexture* create() {
            return il2cpp::create_object<app::GUITexture>(get_class());
        }
    } // namespace GUITexture
} // namespace app::classes::types
