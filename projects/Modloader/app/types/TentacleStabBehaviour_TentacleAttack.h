#pragma once
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack.h>
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack__Array.h>
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack__Boxed.h>
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleStabBehaviour_TentacleAttack {
        inline app::TentacleStabBehaviour_TentacleAttack__Class** type_info() {
            static app::TentacleStabBehaviour_TentacleAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleStabBehaviour_TentacleAttack__Class**)(modloader::win::memory::resolve_rva(0x047628B0));
            }
            return cache;
        }
        inline app::TentacleStabBehaviour_TentacleAttack__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleStabBehaviour_TentacleAttack__Class>(type_info(), "Moon", "TentacleStabBehaviour", "TentacleAttack");
        }
        inline app::TentacleStabBehaviour_TentacleAttack* create() {
            return il2cpp::create_object<app::TentacleStabBehaviour_TentacleAttack>(get_class());
        }
        inline app::TentacleStabBehaviour_TentacleAttack__Boxed* box(app::TentacleStabBehaviour_TentacleAttack value) {
            return il2cpp::box_value<app::TentacleStabBehaviour_TentacleAttack__Boxed>(get_class(), value);
        }
        inline app::TentacleStabBehaviour_TentacleAttack__Array* create_array(int size) {
            return il2cpp::array_new<app::TentacleStabBehaviour_TentacleAttack__Array>(get_class(), size);
        }
        inline app::TentacleStabBehaviour_TentacleAttack__Array* create_array(const std::vector<app::TentacleStabBehaviour_TentacleAttack>& items) {
            return il2cpp::array_new<app::TentacleStabBehaviour_TentacleAttack__Array>(get_class(), items);
        }
    } // namespace TentacleStabBehaviour_TentacleAttack
} // namespace app::classes::types
