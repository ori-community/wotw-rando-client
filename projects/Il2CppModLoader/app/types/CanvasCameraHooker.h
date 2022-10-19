#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasCameraHooker {
        namespace {
            inline app::CanvasCameraHooker__Class* type_info_ref = nullptr;
        }
        inline app::CanvasCameraHooker__Class** type_info = &type_info_ref;
        inline app::CanvasCameraHooker__Class* get_class() {
            return il2cpp::get_class<app::CanvasCameraHooker__Class>(type_info, "", "CanvasCameraHooker");
        }
        inline app::CanvasCameraHooker* create() {
            return il2cpp::create_object<app::CanvasCameraHooker>(get_class());
        }
    } // namespace CanvasCameraHooker
} // namespace app::classes::types
