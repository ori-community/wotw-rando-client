#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_SeinPositionAndDirectionTracker__Class.h>
#include <Modloader/app/structs/ShaderID_SeinPositionAndDirectionTracker.h>

namespace app::classes::types {
    namespace ShaderID_SeinPositionAndDirectionTracker {
        inline app::ShaderID_SeinPositionAndDirectionTracker__Class** type_info = (app::ShaderID_SeinPositionAndDirectionTracker__Class**)(modloader::win::memory::resolve_rva(0x04717BA8));
        inline app::ShaderID_SeinPositionAndDirectionTracker__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinPositionAndDirectionTracker__Class>(type_info, "", "ShaderID_SeinPositionAndDirectionTracker");
        }
        inline app::ShaderID_SeinPositionAndDirectionTracker* create() {
            return il2cpp::create_object<app::ShaderID_SeinPositionAndDirectionTracker>(get_class());
        }
    } // namespace ShaderID_SeinPositionAndDirectionTracker
} // namespace app::classes::types
