#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyBuilder__Class.h>
#include <Modloader/app/structs/KeyBuilder.h>

namespace app::classes::types {
    namespace KeyBuilder {
        inline app::KeyBuilder__Class** type_info = (app::KeyBuilder__Class**)(modloader::win::memory::resolve_rva(0x047588C8));
        inline app::KeyBuilder__Class* get_class() {
            return il2cpp::get_class<app::KeyBuilder__Class>(type_info, "Mono.Security.Cryptography", "KeyBuilder");
        }
        inline app::KeyBuilder* create() {
            return il2cpp::create_object<app::KeyBuilder>(get_class());
        }
    } // namespace KeyBuilder
} // namespace app::classes::types
