#pragma once
#include <Modloader/app/structs/TypeInitializationException.h>
#include <Modloader/app/structs/TypeInitializationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInitializationException {
        inline app::TypeInitializationException__Class** type_info() {
            static app::TypeInitializationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeInitializationException__Class**)(modloader::win::memory::resolve_rva(0x047847B0));
            }
            return cache;
        }
        inline app::TypeInitializationException__Class* get_class() {
            return il2cpp::get_class<app::TypeInitializationException__Class>(type_info(), "System", "TypeInitializationException");
        }
        inline app::TypeInitializationException* create() {
            return il2cpp::create_object<app::TypeInitializationException>(get_class());
        }
    } // namespace TypeInitializationException
} // namespace app::classes::types
