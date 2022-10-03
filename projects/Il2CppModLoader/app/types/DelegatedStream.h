#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelegatedStream {
        namespace {
            app::DelegatedStream__Class* type_info_ref = nullptr;
        }
        app::DelegatedStream__Class** type_info = &type_info_ref;
        inline app::DelegatedStream__Class* get_class() {
            return il2cpp::get_class<app::DelegatedStream__Class>(type_info, "System.Net", "DelegatedStream");
        }
        inline app::DelegatedStream* create() {
            return il2cpp::create_object<app::DelegatedStream>(get_class());
        }
    } // namespace DelegatedStream
} // namespace app::classes::types
