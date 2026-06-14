#pragma once
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester_AgentOutput {
        inline app::FrameCaptureTester_AgentOutput__Class** type_info() {
            static app::FrameCaptureTester_AgentOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameCaptureTester_AgentOutput__Class**)(modloader::win::memory::resolve_rva(0x047279E8));
            }
            return cache;
        }
        inline app::FrameCaptureTester_AgentOutput__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_AgentOutput__Class>(type_info(), "", "FrameCaptureTester", "AgentOutput");
        }
        inline app::FrameCaptureTester_AgentOutput* create() {
            return il2cpp::create_object<app::FrameCaptureTester_AgentOutput>(get_class());
        }
    } // namespace FrameCaptureTester_AgentOutput
} // namespace app::classes::types
