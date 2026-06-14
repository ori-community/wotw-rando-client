#pragma once
#include <Modloader/app/structs/ClosableStream.h>
#include <Modloader/app/structs/ClosableStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClosableStream {
        inline app::ClosableStream__Class** type_info() {
            static app::ClosableStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClosableStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClosableStream__Class* get_class() {
            return il2cpp::get_class<app::ClosableStream__Class>(type_info(), "System.Net", "ClosableStream");
        }
        inline app::ClosableStream* create() {
            return il2cpp::create_object<app::ClosableStream>(get_class());
        }
    } // namespace ClosableStream
} // namespace app::classes::types
