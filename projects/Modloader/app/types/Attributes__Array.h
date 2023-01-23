#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Attributes__Array__Class.h>
#include <Modloader/app/structs/Attributes__Array.h>

namespace app::classes::types {
    namespace Attributes__Array {
        namespace {
            inline app::Attributes__Array__Class* type_info_ref = nullptr;
        }
        inline app::Attributes__Array__Class** type_info = &type_info_ref;
        inline app::Attributes__Array__Class* get_class() {
            return il2cpp::get_class<app::Attributes__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Attributes[]");
        }
        inline app::Attributes__Array* create() {
            return il2cpp::create_object<app::Attributes__Array>(get_class());
        }
    } // namespace Attributes__Array
} // namespace app::classes::types
