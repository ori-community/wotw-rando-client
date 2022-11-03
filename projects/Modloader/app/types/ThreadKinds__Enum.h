#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadKinds__Enum {
        namespace {
            inline app::ThreadKinds__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ThreadKinds__Enum__Class** type_info = &type_info_ref;
        inline app::ThreadKinds__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThreadKinds__Enum__Class>(type_info, "System.Net", "ThreadKinds");
        }
        inline app::ThreadKinds__Enum* create() {
            return il2cpp::create_object<app::ThreadKinds__Enum>(get_class());
        }
    } // namespace ThreadKinds__Enum
} // namespace app::classes::types
