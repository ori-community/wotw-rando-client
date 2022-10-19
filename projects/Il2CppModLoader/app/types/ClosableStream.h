#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClosableStream {
        namespace {
            inline app::ClosableStream__Class* type_info_ref = nullptr;
        }
        inline app::ClosableStream__Class** type_info = &type_info_ref;
        inline app::ClosableStream__Class* get_class() {
            return il2cpp::get_class<app::ClosableStream__Class>(type_info, "System.Net", "ClosableStream");
        }
        inline app::ClosableStream* create() {
            return il2cpp::create_object<app::ClosableStream>(get_class());
        }
    } // namespace ClosableStream
} // namespace app::classes::types
