#pragma once
#include <Modloader/app/structs/IContextAttribute__Array.h>
#include <Modloader/app/structs/IContextAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContextAttribute__Array {
        inline app::IContextAttribute__Array__Class** type_info() {
            static app::IContextAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IContextAttribute__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IContextAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Array__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContextAttribute[]");
        }
        inline app::IContextAttribute__Array* create() {
            return il2cpp::create_object<app::IContextAttribute__Array>(get_class());
        }
    } // namespace IContextAttribute__Array
} // namespace app::classes::types
