#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Array__Class.h>
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Array.h>

namespace app::classes::types {
    namespace IExplicitFixedUpdateHandler__Array {
        namespace {
            inline app::IExplicitFixedUpdateHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::IExplicitFixedUpdateHandler__Array__Class** type_info = &type_info_ref;
        inline app::IExplicitFixedUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IExplicitFixedUpdateHandler__Array__Class>(type_info, "Moon", "IExplicitFixedUpdateHandler[]");
        }
        inline app::IExplicitFixedUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IExplicitFixedUpdateHandler__Array>(get_class());
        }
    } // namespace IExplicitFixedUpdateHandler__Array
} // namespace app::classes::types
