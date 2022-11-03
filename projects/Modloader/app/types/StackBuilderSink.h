#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackBuilderSink {
        inline app::StackBuilderSink__Class** type_info = (app::StackBuilderSink__Class**)(modloader::win::memory::resolve_rva(0x04722C10));
        inline app::StackBuilderSink__Class* get_class() {
            return il2cpp::get_class<app::StackBuilderSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "StackBuilderSink");
        }
        inline app::StackBuilderSink* create() {
            return il2cpp::create_object<app::StackBuilderSink>(get_class());
        }
    } // namespace StackBuilderSink
} // namespace app::classes::types
