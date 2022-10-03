#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingNPCEntity {
        namespace {
            app::SpiderlingNPCEntity__Class* type_info_ref = nullptr;
        }
        app::SpiderlingNPCEntity__Class** type_info = &type_info_ref;
        inline app::SpiderlingNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingNPCEntity__Class>(type_info, "", "SpiderlingNPCEntity");
        }
        inline app::SpiderlingNPCEntity* create() {
            return il2cpp::create_object<app::SpiderlingNPCEntity>(get_class());
        }
    } // namespace SpiderlingNPCEntity
} // namespace app::classes::types
