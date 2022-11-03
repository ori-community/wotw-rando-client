#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKuReceiver__Array {
        namespace {
            inline app::IKuReceiver__Array__Class* type_info_ref = nullptr;
        }
        inline app::IKuReceiver__Array__Class** type_info = &type_info_ref;
        inline app::IKuReceiver__Array__Class* get_class() {
            return il2cpp::get_class<app::IKuReceiver__Array__Class>(type_info, "", "IKuReceiver[]");
        }
        inline app::IKuReceiver__Array* create() {
            return il2cpp::create_object<app::IKuReceiver__Array>(get_class());
        }
    } // namespace IKuReceiver__Array
} // namespace app::classes::types
