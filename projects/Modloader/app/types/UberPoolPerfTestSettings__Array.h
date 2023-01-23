#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array__Class.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array.h>

namespace app::classes::types {
    namespace UberPoolPerfTestSettings__Array {
        namespace {
            inline app::UberPoolPerfTestSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPerfTestSettings__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTestSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTestSettings__Array__Class>(type_info, "", "UberPoolPerfTestSettings[]");
        }
        inline app::UberPoolPerfTestSettings__Array* create() {
            return il2cpp::create_object<app::UberPoolPerfTestSettings__Array>(get_class());
        }
    } // namespace UberPoolPerfTestSettings__Array
} // namespace app::classes::types
