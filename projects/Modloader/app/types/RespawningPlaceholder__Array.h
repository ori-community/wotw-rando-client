#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array__Class.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array.h>

namespace app::classes::types {
    namespace RespawningPlaceholder__Array {
        namespace {
            inline app::RespawningPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        inline app::RespawningPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::RespawningPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholder__Array__Class>(type_info, "", "RespawningPlaceholder[]");
        }
        inline app::RespawningPlaceholder__Array* create() {
            return il2cpp::create_object<app::RespawningPlaceholder__Array>(get_class());
        }
    } // namespace RespawningPlaceholder__Array
} // namespace app::classes::types
