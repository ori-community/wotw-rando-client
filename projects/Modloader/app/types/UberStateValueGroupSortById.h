#pragma once
#include <Modloader/app/structs/UberStateValueGroupSortById.h>
#include <Modloader/app/structs/UberStateValueGroupSortById__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateValueGroupSortById {
        inline app::UberStateValueGroupSortById__Class** type_info() {
            static app::UberStateValueGroupSortById__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateValueGroupSortById__Class**)(modloader::win::memory::resolve_rva(0x04775960));
            }
            return cache;
        }
        inline app::UberStateValueGroupSortById__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroupSortById__Class>(type_info(), "Moon.UberStateVisualization", "UberStateValueGroupSortById");
        }
        inline app::UberStateValueGroupSortById* create() {
            return il2cpp::create_object<app::UberStateValueGroupSortById>(get_class());
        }
    } // namespace UberStateValueGroupSortById
} // namespace app::classes::types
