#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSmoother {
        namespace {
            inline app::SimpleSmoother__Class* type_info_ref = nullptr;
        }
        inline app::SimpleSmoother__Class** type_info = &type_info_ref;
        inline app::SimpleSmoother__Class* get_class() {
            return il2cpp::get_class<app::SimpleSmoother__Class>(type_info, "TriangleNet.Smoothing", "SimpleSmoother");
        }
        inline app::SimpleSmoother* create() {
            return il2cpp::create_object<app::SimpleSmoother>(get_class());
        }
    } // namespace SimpleSmoother
} // namespace app::classes::types
