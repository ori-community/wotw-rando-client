#pragma once
#include <Modloader/app/structs/FuncCondition.h>
#include <Modloader/app/structs/FuncCondition__Array.h>
#include <Modloader/app/structs/FuncCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FuncCondition {
        inline app::FuncCondition__Class** type_info() {
            static app::FuncCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FuncCondition__Class**)(modloader::win::memory::resolve_rva(0x0476E630));
            }
            return cache;
        }
        inline app::FuncCondition__Class* get_class() {
            return il2cpp::get_class<app::FuncCondition__Class>(type_info(), "Moon.InteractionGraph", "FuncCondition");
        }
        inline app::FuncCondition* create() {
            return il2cpp::create_object<app::FuncCondition>(get_class());
        }
        inline app::FuncCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), size);
        }
        inline app::FuncCondition__Array* create_array(const std::vector<app::FuncCondition*>& items) {
            return il2cpp::array_new<app::FuncCondition__Array>(get_class(), items);
        }
    } // namespace FuncCondition
} // namespace app::classes::types
