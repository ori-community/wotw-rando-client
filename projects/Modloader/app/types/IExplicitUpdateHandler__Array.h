#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandler__Array {
        namespace {
            inline app::IExplicitUpdateHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::IExplicitUpdateHandler__Array__Class** type_info = &type_info_ref;
        inline app::IExplicitUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandler__Array__Class>(type_info, "Moon", "IExplicitUpdateHandler[]");
        }
        inline app::IExplicitUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IExplicitUpdateHandler__Array>(get_class());
        }
    } // namespace IExplicitUpdateHandler__Array
} // namespace app::classes::types
