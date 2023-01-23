#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreserveSigAttribute__Class.h>
#include <Modloader/app/structs/PreserveSigAttribute.h>

namespace app::classes::types {
    namespace PreserveSigAttribute {
        inline app::PreserveSigAttribute__Class** type_info = (app::PreserveSigAttribute__Class**)(modloader::win::memory::resolve_rva(0x04763D40));
        inline app::PreserveSigAttribute__Class* get_class() {
            return il2cpp::get_class<app::PreserveSigAttribute__Class>(type_info, "System.Runtime.InteropServices", "PreserveSigAttribute");
        }
        inline app::PreserveSigAttribute* create() {
            return il2cpp::create_object<app::PreserveSigAttribute>(get_class());
        }
    } // namespace PreserveSigAttribute
} // namespace app::classes::types
