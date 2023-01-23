#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Sdk__Array__Class.h>
#include <Modloader/app/structs/Sdk__Array.h>

namespace app::classes::types {
    namespace Sdk__Array {
        namespace {
            inline app::Sdk__Array__Class* type_info_ref = nullptr;
        }
        inline app::Sdk__Array__Class** type_info = &type_info_ref;
        inline app::Sdk__Array__Class* get_class() {
            return il2cpp::get_class<app::Sdk__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Sdk[]");
        }
        inline app::Sdk__Array* create() {
            return il2cpp::create_object<app::Sdk__Array>(get_class());
        }
    } // namespace Sdk__Array
} // namespace app::classes::types
