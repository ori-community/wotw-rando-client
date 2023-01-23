#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderlingNPCEntity__Class.h>
#include <Modloader/app/structs/SpiderlingNPCEntity.h>

namespace app::classes::types {
    namespace SpiderlingNPCEntity {
        namespace {
            inline app::SpiderlingNPCEntity__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingNPCEntity__Class** type_info = &type_info_ref;
        inline app::SpiderlingNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingNPCEntity__Class>(type_info, "", "SpiderlingNPCEntity");
        }
        inline app::SpiderlingNPCEntity* create() {
            return il2cpp::create_object<app::SpiderlingNPCEntity>(get_class());
        }
    } // namespace SpiderlingNPCEntity
} // namespace app::classes::types
