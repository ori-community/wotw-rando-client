#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererNPC_InteractionLine {
        namespace {
            inline app::WandererNPC_InteractionLine__Class* type_info_ref = nullptr;
        }
        inline app::WandererNPC_InteractionLine__Class** type_info = &type_info_ref;
        inline app::WandererNPC_InteractionLine__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererNPC_InteractionLine__Class>(type_info, "", "WandererNPC", "InteractionLine");
        }
        inline app::WandererNPC_InteractionLine* create() {
            return il2cpp::create_object<app::WandererNPC_InteractionLine>(get_class());
        }
        inline app::WandererNPC_InteractionLine__Array* create_array(int size) {
            return il2cpp::array_new<app::WandererNPC_InteractionLine__Array>(get_class(), size);
        }
        inline app::WandererNPC_InteractionLine__Array* create_array(const std::vector<app::WandererNPC_InteractionLine*>& items) {
            return il2cpp::array_new<app::WandererNPC_InteractionLine__Array>(get_class(), items);
        }
    } // namespace WandererNPC_InteractionLine
} // namespace app::classes::types
