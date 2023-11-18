#pragma once
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/DesiredUberStateBool__Array.h>
#include <Modloader/app/structs/DesiredUberStateBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateBool {
        inline app::DesiredUberStateBool__Class** type_info() {
            static app::DesiredUberStateBool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesiredUberStateBool__Class**)(modloader::win::memory::resolve_rva(0x04741A60));
            }
            return cache;
        }
        inline app::DesiredUberStateBool__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateBool__Class>(type_info(), "", "DesiredUberStateBool");
        }
        inline app::DesiredUberStateBool* create() {
            return il2cpp::create_object<app::DesiredUberStateBool>(get_class());
        }
        inline app::DesiredUberStateBool__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateBool__Array>(get_class(), size);
        }
        inline app::DesiredUberStateBool__Array* create_array(const std::vector<app::DesiredUberStateBool*>& items) {
            return il2cpp::array_new<app::DesiredUberStateBool__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateBool
} // namespace app::classes::types
