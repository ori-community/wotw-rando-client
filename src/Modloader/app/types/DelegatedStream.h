#pragma once
#include <Modloader/app/structs/DelegatedStream.h>
#include <Modloader/app/structs/DelegatedStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegatedStream {
        inline app::DelegatedStream__Class** type_info() {
            static app::DelegatedStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelegatedStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelegatedStream__Class* get_class() {
            return il2cpp::get_class<app::DelegatedStream__Class>(type_info(), "System.Net", "DelegatedStream");
        }
        inline app::DelegatedStream* create() {
            return il2cpp::create_object<app::DelegatedStream>(get_class());
        }
    } // namespace DelegatedStream
} // namespace app::classes::types
