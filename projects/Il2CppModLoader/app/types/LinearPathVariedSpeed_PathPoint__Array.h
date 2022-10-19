#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed_PathPoint__Array {
        namespace {
            inline app::LinearPathVariedSpeed_PathPoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array__Class** type_info = &type_info_ref;
        inline app::LinearPathVariedSpeed_PathPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LinearPathVariedSpeed_PathPoint__Array__Class>(type_info, "", "LinearPathVariedSpeed+PathPoint[]");
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed_PathPoint__Array>(get_class());
        }
    } // namespace LinearPathVariedSpeed_PathPoint__Array
} // namespace app::classes::types
