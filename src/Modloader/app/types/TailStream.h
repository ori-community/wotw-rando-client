#pragma once
#include <Modloader/app/structs/TailStream.h>
#include <Modloader/app/structs/TailStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TailStream {
        inline app::TailStream__Class** type_info() {
            static app::TailStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TailStream__Class**)(modloader::win::memory::resolve_rva(0x04725DF8));
            }
            return cache;
        }
        inline app::TailStream__Class* get_class() {
            return il2cpp::get_class<app::TailStream__Class>(type_info(), "System.Security.Cryptography", "TailStream");
        }
        inline app::TailStream* create() {
            return il2cpp::create_object<app::TailStream>(get_class());
        }
    } // namespace TailStream
} // namespace app::classes::types
