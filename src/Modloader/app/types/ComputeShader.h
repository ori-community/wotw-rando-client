#pragma once
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/ComputeShader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComputeShader {
        inline app::ComputeShader__Class** type_info() {
            static app::ComputeShader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComputeShader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComputeShader__Class* get_class() {
            return il2cpp::get_class<app::ComputeShader__Class>(type_info(), "UnityEngine", "ComputeShader");
        }
        inline app::ComputeShader* create() {
            return il2cpp::create_object<app::ComputeShader>(get_class());
        }
    } // namespace ComputeShader
} // namespace app::classes::types
