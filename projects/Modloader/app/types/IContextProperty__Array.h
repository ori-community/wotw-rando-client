#pragma once
#include <Modloader/app/structs/IContextProperty__Array.h>
#include <Modloader/app/structs/IContextProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContextProperty__Array {
        inline app::IContextProperty__Array__Class** type_info() {
            static app::IContextProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContextProperty__Array__Class**)(modloader::win::memory::resolve_rva(0x04728E98));
            }
            return cache;
        }
        inline app::IContextProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextProperty__Array__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContextProperty[]");
        }
        inline app::IContextProperty__Array* create() {
            return il2cpp::create_object<app::IContextProperty__Array>(get_class());
        }
    } // namespace IContextProperty__Array
} // namespace app::classes::types
