#pragma once
#include <Modloader/app/structs/Targets_ConsumerList.h>
#include <Modloader/app/structs/Targets_ConsumerList__Array.h>
#include <Modloader/app/structs/Targets_ConsumerList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Targets_ConsumerList {
        inline app::Targets_ConsumerList__Class** type_info() {
            static app::Targets_ConsumerList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Targets_ConsumerList__Class**)(modloader::win::memory::resolve_rva(0x0474E378));
            }
            return cache;
        }
        inline app::Targets_ConsumerList__Class* get_class() {
            return il2cpp::get_nested_class<app::Targets_ConsumerList__Class>(type_info(), "Game", "Targets", "ConsumerList");
        }
        inline app::Targets_ConsumerList* create() {
            return il2cpp::create_object<app::Targets_ConsumerList>(get_class());
        }
        inline app::Targets_ConsumerList__Array* create_array(int size) {
            return il2cpp::array_new<app::Targets_ConsumerList__Array>(get_class(), size);
        }
        inline app::Targets_ConsumerList__Array* create_array(const std::vector<app::Targets_ConsumerList*>& items) {
            return il2cpp::array_new<app::Targets_ConsumerList__Array>(get_class(), items);
        }
    } // namespace Targets_ConsumerList
} // namespace app::classes::types
