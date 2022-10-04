#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContributeClientContextSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContributeClientContextSink__Class** type_info;
        inline app::IContributeClientContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeClientContextSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
        }
        inline app::IContributeClientContextSink* create() {
            return il2cpp::create_object<app::IContributeClientContextSink>(get_class());
        }
    } // namespace IContributeClientContextSink
} // namespace app::classes::types
