#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComputeShader {
        namespace {
            inline app::ComputeShader__Class* type_info_ref = nullptr;
        }
        inline app::ComputeShader__Class** type_info = &type_info_ref;
        inline app::ComputeShader__Class* get_class() {
            return il2cpp::get_class<app::ComputeShader__Class>(type_info, "UnityEngine", "ComputeShader");
        }
        inline app::ComputeShader* create() {
            return il2cpp::create_object<app::ComputeShader>(get_class());
        }
    } // namespace ComputeShader
} // namespace app::classes::types
