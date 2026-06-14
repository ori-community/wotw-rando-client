#pragma once
#include <Modloader/app/structs/HeaderInfo__Array.h>
#include <Modloader/app/structs/HeaderInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderInfo__Array {
        inline app::HeaderInfo__Array__Class** type_info() {
            static app::HeaderInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HeaderInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0470FE80));
            }
            return cache;
        }
        inline app::HeaderInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Array__Class>(type_info(), "System.Net", "HeaderInfo[]");
        }
        inline app::HeaderInfo__Array* create() {
            return il2cpp::create_object<app::HeaderInfo__Array>(get_class());
        }
    } // namespace HeaderInfo__Array
} // namespace app::classes::types
