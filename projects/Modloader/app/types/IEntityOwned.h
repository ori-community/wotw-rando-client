#pragma once
#include <Modloader/app/structs/IEntityOwned.h>
#include <Modloader/app/structs/IEntityOwned__Array.h>
#include <Modloader/app/structs/IEntityOwned__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityOwned {
        inline app::IEntityOwned__Class** type_info() {
            static app::IEntityOwned__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEntityOwned__Class**)(modloader::win::memory::resolve_rva(0x04771000));
            }
            return cache;
        }
        inline app::IEntityOwned__Class* get_class() {
            return il2cpp::get_class<app::IEntityOwned__Class>(type_info(), "Moon", "IEntityOwned");
        }
        inline app::IEntityOwned__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntityOwned__Array>(get_class(), size);
        }
        inline app::IEntityOwned__Array* create_array(const std::vector<app::IEntityOwned*>& items) {
            return il2cpp::array_new<app::IEntityOwned__Array>(get_class(), items);
        }
    } // namespace IEntityOwned
} // namespace app::classes::types
