#pragma once
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/IStrongBox__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStrongBox__Array {
        inline app::IStrongBox__Array__Class** type_info() {
            static app::IStrongBox__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStrongBox__Array__Class**)(modloader::win::memory::resolve_rva(0x04737F70));
            }
            return cache;
        }
        inline app::IStrongBox__Array__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Array__Class>(type_info(), "System.Runtime.CompilerServices", "IStrongBox[]");
        }
        inline app::IStrongBox__Array* create() {
            return il2cpp::create_object<app::IStrongBox__Array>(get_class());
        }
    } // namespace IStrongBox__Array
} // namespace app::classes::types
