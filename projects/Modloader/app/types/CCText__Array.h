#pragma once
#include <Modloader/app/structs/CCText__Array.h>
#include <Modloader/app/structs/CCText__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCText__Array {
        inline app::CCText__Array__Class** type_info() {
            static app::CCText__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCText__Array__Class**)(modloader::win::memory::resolve_rva(0x04739A10));
            }
            return cache;
        }
        inline app::CCText__Array__Class* get_class() {
            return il2cpp::get_class<app::CCText__Array__Class>(type_info(), "", "CCText[]");
        }
        inline app::CCText__Array* create() {
            return il2cpp::create_object<app::CCText__Array>(get_class());
        }
    } // namespace CCText__Array
} // namespace app::classes::types
