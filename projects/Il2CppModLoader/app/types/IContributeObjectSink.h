#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContributeObjectSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContributeObjectSink__Class** type_info;
        inline app::IContributeObjectSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeObjectSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
        }
        inline app::IContributeObjectSink* create() {
            return il2cpp::create_object<app::IContributeObjectSink>(get_class());
        }
    } // namespace IContributeObjectSink
} // namespace app::classes::types
