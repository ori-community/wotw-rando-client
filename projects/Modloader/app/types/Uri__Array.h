#pragma once
#include <Modloader/app/structs/Uri__Array.h>
#include <Modloader/app/structs/Uri__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Uri__Array {
        inline app::Uri__Array__Class** type_info() {
            static app::Uri__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Uri__Array__Class**)(modloader::win::memory::resolve_rva(0x04794538));
            }
            return cache;
        }
        inline app::Uri__Array__Class* get_class() {
            return il2cpp::get_class<app::Uri__Array__Class>(type_info(), "System", "Uri[]");
        }
        inline app::Uri__Array* create() {
            return il2cpp::create_object<app::Uri__Array>(get_class());
        }
    } // namespace Uri__Array
} // namespace app::classes::types
