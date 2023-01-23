#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LockInputEntity__Class.h>
#include <Modloader/app/structs/LockInputEntity.h>

namespace app::classes::types {
    namespace LockInputEntity {
        namespace {
            inline app::LockInputEntity__Class* type_info_ref = nullptr;
        }
        inline app::LockInputEntity__Class** type_info = &type_info_ref;
        inline app::LockInputEntity__Class* get_class() {
            return il2cpp::get_class<app::LockInputEntity__Class>(type_info, "Moon.Timeline", "LockInputEntity");
        }
        inline app::LockInputEntity* create() {
            return il2cpp::create_object<app::LockInputEntity>(get_class());
        }
    } // namespace LockInputEntity
} // namespace app::classes::types
