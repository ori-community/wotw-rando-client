#pragma once
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/IUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberState__Array {
        inline app::IUberState__Array__Class** type_info() {
            static app::IUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x047331A0));
            }
            return cache;
        }
        inline app::IUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberState__Array__Class>(type_info(), "Moon", "IUberState[]");
        }
        inline app::IUberState__Array* create() {
            return il2cpp::create_object<app::IUberState__Array>(get_class());
        }
    } // namespace IUberState__Array
} // namespace app::classes::types
