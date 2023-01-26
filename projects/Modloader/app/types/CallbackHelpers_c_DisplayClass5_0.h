#pragma once
#include <Modloader/app/structs/CallbackHelpers_c_DisplayClass5_0.h>
#include <Modloader/app/structs/CallbackHelpers_c_DisplayClass5_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallbackHelpers_c_DisplayClass5_0 {
        inline app::CallbackHelpers_c_DisplayClass5_0__Class** type_info() {
            static app::CallbackHelpers_c_DisplayClass5_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallbackHelpers_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0478EFD0));
            }
            return cache;
        }
        inline app::CallbackHelpers_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CallbackHelpers_c_DisplayClass5_0__Class>(type_info(), "Mono.Net.Security.Private", "CallbackHelpers", "<>c__DisplayClass5_0");
        }
        inline app::CallbackHelpers_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::CallbackHelpers_c_DisplayClass5_0>(get_class());
        }
    } // namespace CallbackHelpers_c_DisplayClass5_0
} // namespace app::classes::types
