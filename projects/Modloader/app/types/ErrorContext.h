#pragma once
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/ErrorContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ErrorContext {
        inline app::ErrorContext__Class** type_info() {
            static app::ErrorContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ErrorContext__Class**)(modloader::win::memory::resolve_rva(0x047332E0));
            }
            return cache;
        }
        inline app::ErrorContext__Class* get_class() {
            return il2cpp::get_class<app::ErrorContext__Class>(type_info(), "Newtonsoft.Json.Serialization", "ErrorContext");
        }
        inline app::ErrorContext* create() {
            return il2cpp::create_object<app::ErrorContext>(get_class());
        }
    } // namespace ErrorContext
} // namespace app::classes::types
