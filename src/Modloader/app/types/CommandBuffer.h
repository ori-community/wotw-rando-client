#pragma once
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/CommandBuffer__Array.h>
#include <Modloader/app/structs/CommandBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommandBuffer {
        inline app::CommandBuffer__Class** type_info() {
            static app::CommandBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CommandBuffer__Class**)(modloader::win::memory::resolve_rva(0x047309C0));
            }
            return cache;
        }
        inline app::CommandBuffer__Class* get_class() {
            return il2cpp::get_class<app::CommandBuffer__Class>(type_info(), "UnityEngine.Rendering", "CommandBuffer");
        }
        inline app::CommandBuffer* create() {
            return il2cpp::create_object<app::CommandBuffer>(get_class());
        }
        inline app::CommandBuffer__Array* create_array(int size) {
            return il2cpp::array_new<app::CommandBuffer__Array>(get_class(), size);
        }
        inline app::CommandBuffer__Array* create_array(const std::vector<app::CommandBuffer*>& items) {
            return il2cpp::array_new<app::CommandBuffer__Array>(get_class(), items);
        }
    } // namespace CommandBuffer
} // namespace app::classes::types
