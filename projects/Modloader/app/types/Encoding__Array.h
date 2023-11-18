#pragma once
#include <Modloader/app/structs/Encoding__Array.h>
#include <Modloader/app/structs/Encoding__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoding__Array {
        inline app::Encoding__Array__Class** type_info() {
            static app::Encoding__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Encoding__Array__Class**)(modloader::win::memory::resolve_rva(0x04768948));
            }
            return cache;
        }
        inline app::Encoding__Array__Class* get_class() {
            return il2cpp::get_class<app::Encoding__Array__Class>(type_info(), "System.Text", "Encoding[]");
        }
        inline app::Encoding__Array* create() {
            return il2cpp::create_object<app::Encoding__Array>(get_class());
        }
    } // namespace Encoding__Array
} // namespace app::classes::types
