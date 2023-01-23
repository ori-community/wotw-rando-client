#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoPlaceholder__Array__Class.h>
#include <Modloader/app/structs/SkeetoPlaceholder__Array.h>

namespace app::classes::types {
    namespace SkeetoPlaceholder__Array {
        namespace {
            inline app::SkeetoPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::SkeetoPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPlaceholder__Array__Class>(type_info, "", "SkeetoPlaceholder[]");
        }
        inline app::SkeetoPlaceholder__Array* create() {
            return il2cpp::create_object<app::SkeetoPlaceholder__Array>(get_class());
        }
    } // namespace SkeetoPlaceholder__Array
} // namespace app::classes::types
