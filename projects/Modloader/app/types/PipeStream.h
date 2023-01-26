#pragma once
#include <Modloader/app/structs/PipeStream.h>
#include <Modloader/app/structs/PipeStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PipeStream {
        inline app::PipeStream__Class** type_info() {
            static app::PipeStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PipeStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PipeStream__Class* get_class() {
            return il2cpp::get_class<app::PipeStream__Class>(type_info(), "System.IO.Pipes", "PipeStream");
        }
        inline app::PipeStream* create() {
            return il2cpp::create_object<app::PipeStream>(get_class());
        }
    } // namespace PipeStream
} // namespace app::classes::types
