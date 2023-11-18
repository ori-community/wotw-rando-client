#pragma once
#include <Modloader/app/structs/IEntityBehaviour.h>
#include <Modloader/app/structs/IEntityBehaviour__Array.h>
#include <Modloader/app/structs/IEntityBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityBehaviour {
        inline app::IEntityBehaviour__Class** type_info() {
            static app::IEntityBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEntityBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0477DBC8));
            }
            return cache;
        }
        inline app::IEntityBehaviour__Class* get_class() {
            return il2cpp::get_class<app::IEntityBehaviour__Class>(type_info(), "Moon", "IEntityBehaviour");
        }
        inline app::IEntityBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntityBehaviour__Array>(get_class(), size);
        }
        inline app::IEntityBehaviour__Array* create_array(const std::vector<app::IEntityBehaviour*>& items) {
            return il2cpp::array_new<app::IEntityBehaviour__Array>(get_class(), items);
        }
    } // namespace IEntityBehaviour
} // namespace app::classes::types
