#pragma once
#include <Modloader/app/structs/IKuReceiver__Array.h>
#include <Modloader/app/structs/IKuReceiver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKuReceiver__Array {
        inline app::IKuReceiver__Array__Class** type_info() {
            static app::IKuReceiver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKuReceiver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKuReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::IKuReceiver__Array__Class>(type_info(), "", "IKuReceiver[]");
        }
        inline app::IKuReceiver__Array* create() {
            return il2cpp::create_object<app::IKuReceiver__Array>(get_class());
        }
    } // namespace IKuReceiver__Array
} // namespace app::classes::types
