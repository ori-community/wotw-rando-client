#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleNPCEntity {
        namespace {
            inline app::SimpleNPCEntity__Class* type_info_ref = nullptr;
        }
        inline app::SimpleNPCEntity__Class** type_info = &type_info_ref;
        inline app::SimpleNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::SimpleNPCEntity__Class>(type_info, "frameworks.entity", "SimpleNPCEntity");
        }
        inline app::SimpleNPCEntity* create() {
            return il2cpp::create_object<app::SimpleNPCEntity>(get_class());
        }
    } // namespace SimpleNPCEntity
} // namespace app::classes::types
