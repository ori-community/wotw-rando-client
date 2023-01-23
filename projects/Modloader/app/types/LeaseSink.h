#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaseSink__Class.h>
#include <Modloader/app/structs/LeaseSink.h>

namespace app::classes::types {
    namespace LeaseSink {
        inline app::LeaseSink__Class** type_info = (app::LeaseSink__Class**)(modloader::win::memory::resolve_rva(0x04728A08));
        inline app::LeaseSink__Class* get_class() {
            return il2cpp::get_class<app::LeaseSink__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LeaseSink");
        }
        inline app::LeaseSink* create() {
            return il2cpp::create_object<app::LeaseSink>(get_class());
        }
    } // namespace LeaseSink
} // namespace app::classes::types
