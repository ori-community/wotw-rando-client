#pragma once
#include <Modloader/app/structs/MonoHttpDate.h>
#include <Modloader/app/structs/MonoHttpDate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoHttpDate {
        inline app::MonoHttpDate__Class** type_info() {
            static app::MonoHttpDate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoHttpDate__Class**)(modloader::win::memory::resolve_rva(0x04756EB8));
            }
            return cache;
        }
        inline app::MonoHttpDate__Class* get_class() {
            return il2cpp::get_class<app::MonoHttpDate__Class>(type_info(), "System.Net", "MonoHttpDate");
        }
        inline app::MonoHttpDate* create() {
            return il2cpp::create_object<app::MonoHttpDate>(get_class());
        }
    } // namespace MonoHttpDate
} // namespace app::classes::types
