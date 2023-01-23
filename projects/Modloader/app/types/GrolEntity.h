#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrolEntity__Class.h>
#include <Modloader/app/structs/GrolEntity.h>

namespace app::classes::types {
    namespace GrolEntity {
        namespace {
            inline app::GrolEntity__Class* type_info_ref = nullptr;
        }
        inline app::GrolEntity__Class** type_info = &type_info_ref;
        inline app::GrolEntity__Class* get_class() {
            return il2cpp::get_class<app::GrolEntity__Class>(type_info, "", "GrolEntity");
        }
        inline app::GrolEntity* create() {
            return il2cpp::create_object<app::GrolEntity>(get_class());
        }
    } // namespace GrolEntity
} // namespace app::classes::types
