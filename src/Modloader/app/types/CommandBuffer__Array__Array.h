#pragma once
#include <Modloader/app/structs/CommandBuffer__Array__Array.h>
#include <Modloader/app/structs/CommandBuffer__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandBuffer__Array__Array {
        inline app::CommandBuffer__Array__Array__Class** type_info() {
            static app::CommandBuffer__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CommandBuffer__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04714FF0));
            }
            return cache;
        }
        inline app::CommandBuffer__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::CommandBuffer__Array__Array__Class>(type_info(), "UnityEngine.Rendering", "CommandBuffer[][]");
        }
        inline app::CommandBuffer__Array__Array* create() {
            return il2cpp::create_object<app::CommandBuffer__Array__Array>(get_class());
        }
    } // namespace CommandBuffer__Array__Array
} // namespace app::classes::types
