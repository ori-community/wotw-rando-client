#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PipeStream {
        namespace {
            app::PipeStream__Class* type_info_ref = nullptr;
        }
        app::PipeStream__Class** type_info = &type_info_ref;
        inline app::PipeStream__Class* get_class() {
            return il2cpp::get_class<app::PipeStream__Class>(type_info, "System.IO.Pipes", "PipeStream");
        }
        inline app::PipeStream* create() {
            return il2cpp::create_object<app::PipeStream>(get_class());
        }
    } // namespace PipeStream
} // namespace app::classes::types
