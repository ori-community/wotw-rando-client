#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameCaptureTester_AgentOutput {
        inline app::FrameCaptureTester_AgentOutput__Class** type_info = (app::FrameCaptureTester_AgentOutput__Class**)(modloader::win::memory::resolve_rva(0x047279E8));
        inline app::FrameCaptureTester_AgentOutput__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_AgentOutput__Class>(type_info, "", "FrameCaptureTester", "AgentOutput");
        }
        inline app::FrameCaptureTester_AgentOutput* create() {
            return il2cpp::create_object<app::FrameCaptureTester_AgentOutput>(get_class());
        }
    } // namespace FrameCaptureTester_AgentOutput
} // namespace app::classes::types
