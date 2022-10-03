#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VoronoiFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VoronoiFactory__Class** type_info;
        inline app::VoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::VoronoiFactory__Class>(type_info, "TriangleNet.Smoothing", "VoronoiFactory");
        }
        inline app::VoronoiFactory* create() {
            return il2cpp::create_object<app::VoronoiFactory>(get_class());
        }
    } // namespace VoronoiFactory
} // namespace app::classes::types
