#pragma once
#include <Modloader/app/structs/IEntityEventListener.h>
#include <Modloader/app/structs/IEntityEventListener__Array.h>
#include <Modloader/app/structs/IEntityEventListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityEventListener {
        inline app::IEntityEventListener__Class** type_info() {
            static app::IEntityEventListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEntityEventListener__Class**)(modloader::win::memory::resolve_rva(0x0474A130));
            }
            return cache;
        }
        inline app::IEntityEventListener__Class* get_class() {
            return il2cpp::get_class<app::IEntityEventListener__Class>(type_info(), "Moon", "IEntityEventListener");
        }
        inline app::IEntityEventListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntityEventListener__Array>(get_class(), size);
        }
        inline app::IEntityEventListener__Array* create_array(const std::vector<app::IEntityEventListener*>& items) {
            return il2cpp::array_new<app::IEntityEventListener__Array>(get_class(), items);
        }
    } // namespace IEntityEventListener
} // namespace app::classes::types
