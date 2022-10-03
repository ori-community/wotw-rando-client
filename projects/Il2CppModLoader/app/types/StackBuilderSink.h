#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackBuilderSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackBuilderSink__Class** type_info;
        inline app::StackBuilderSink__Class* get_class() {
            return il2cpp::get_class<app::StackBuilderSink__Class>(type_info, "System.Runtime.Remoting.Messaging", "StackBuilderSink");
        }
        inline app::StackBuilderSink* create() {
            return il2cpp::create_object<app::StackBuilderSink>(get_class());
        }
    } // namespace StackBuilderSink
} // namespace app::classes::types
