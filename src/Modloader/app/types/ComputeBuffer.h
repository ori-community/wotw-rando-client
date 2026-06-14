#pragma once
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/ComputeBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComputeBuffer {
        inline app::ComputeBuffer__Class** type_info() {
            static app::ComputeBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ComputeBuffer__Class**)(modloader::win::memory::resolve_rva(0x047314C0));
            }
            return cache;
        }
        inline app::ComputeBuffer__Class* get_class() {
            return il2cpp::get_class<app::ComputeBuffer__Class>(type_info(), "UnityEngine", "ComputeBuffer");
        }
        inline app::ComputeBuffer* create() {
            return il2cpp::create_object<app::ComputeBuffer>(get_class());
        }
    } // namespace ComputeBuffer
} // namespace app::classes::types
